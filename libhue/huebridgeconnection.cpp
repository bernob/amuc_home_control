/*
 * Copyright 2013 Michael Zanetti
 *                Christian Muehlhaeuser
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Michael Zanetti <michael_zanetti@gmx.net>
 *      Christian Muehlhaeuser <muesli@gmail.com>
 */

#include "huebridgeconnection.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QJsonDocument>


HueBridgeConnection *HueBridgeConnection::s_instance = 0;

HueBridgeConnection *HueBridgeConnection::instance()
{
    if (!s_instance) {
        s_instance = new HueBridgeConnection();
    }

    return s_instance;
}

HueBridgeConnection::HueBridgeConnection():
    m_nam(new QNetworkAccessManager(this)),
    m_bridge(BRIDGE_IP),
    m_apiKey("102e3b98f72487f1fbd15483a9b188f"),
    m_requestCounter(0)
{
    m_baseApiUrl = "http://" + m_bridge.toString() + "/api/" + m_apiKey + "/";
    qDebug() << m_bridge.toIPv4Address() << " ,m_apiKey = " << m_apiKey;
}

int HueBridgeConnection::get(const QString &path, QObject *sender, const QString &slot)
{
    if (m_baseApiUrl.isEmpty()) {
        qWarning() << "Not authenticated to bridge, cannot get" << path;
        return -1;
    }
    QUrl url(m_baseApiUrl + path);
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = m_nam->get(request);
    connect(reply, SIGNAL(finished()), this, SLOT(slotOpFinished()));
    m_requestIdMap.insert(reply, m_requestCounter);
    CallbackObject co(sender, slot);
    m_requestSenderMap.insert(m_requestCounter, co);

    return m_requestCounter++;
}

int HueBridgeConnection::deleteResource(const QString &path, QObject *sender, const QString &slot)
{
    if (m_baseApiUrl.isEmpty()) {
        qWarning() << "Not authenticated to bridge, cannot delete" << path;
        return -1;
    }
    QUrl url(m_baseApiUrl + path);
    QNetworkRequest request;
    request.setUrl(url);
    QNetworkReply *reply = m_nam->deleteResource(request);
    connect(reply, SIGNAL(finished()), this, SLOT(slotOpFinished()));
    m_requestIdMap.insert(reply, m_requestCounter);
    m_writeOperationList.append(reply);
    CallbackObject co(sender, slot);
    m_requestSenderMap.insert(m_requestCounter, co);
    return m_requestCounter++;
}

int HueBridgeConnection::post(const QString &path, const QVariantMap &params, QObject *sender, const QString &slot)
{
    if (m_baseApiUrl.isEmpty()) {
        qWarning() << "Not authenticated to bridge, cannot post" << path;
        return -1;
    }

    QUrl url(m_baseApiUrl + path);
    QNetworkRequest request;
    request.setUrl(url);

    QJsonDocument jsonDoc = QJsonDocument::fromVariant(params);
    QByteArray data = jsonDoc.toJson();

    QNetworkReply *reply = m_nam->post(request, data);
    connect(reply, SIGNAL(finished()), this, SLOT(slotOpFinished()));
    m_requestIdMap.insert(reply, m_requestCounter);
    m_writeOperationList.append(reply);
    CallbackObject co(sender, slot);
    m_requestSenderMap.insert(m_requestCounter, co);
    return m_requestCounter++;
}

int HueBridgeConnection::put(const QString &path, const QVariantMap &params, QObject *sender, const QString &slot)
{
    if (m_baseApiUrl.isEmpty()) {
        qWarning() << "Not authenticated to bridge, cannot put" << path;
        return -1;
    }

    QUrl url(m_baseApiUrl + path);
    QNetworkRequest request;
    request.setUrl(url);

    QJsonDocument jsonDoc = QJsonDocument::fromVariant(params);
    QByteArray data = jsonDoc.toJson();

    qDebug() << "putting" << url << data;

    QNetworkReply *reply = m_nam->put(request, data);
    connect(reply, SIGNAL(finished()), this, SLOT(slotOpFinished()));
    m_requestIdMap.insert(reply, m_requestCounter);
    m_writeOperationList.append(reply);
    CallbackObject co(sender, slot);
    m_requestSenderMap.insert(m_requestCounter, co);
    return m_requestCounter++;
}

void HueBridgeConnection::slotOpFinished()
{
    QNetworkReply *reply = static_cast<QNetworkReply*>(sender());
    reply->deleteLater();

    QByteArray response = reply->readAll();
    int id = m_requestIdMap.take(reply);
    CallbackObject co = m_requestSenderMap.take(id);

    QJsonParseError error;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response, &error);
    if (error.error != QJsonParseError::NoError) {
        qWarning() << "error parsing get response:" << error.errorString();
        return;
    }
    QVariant rsp = jsonDoc.toVariant();

    if (m_writeOperationList.contains(reply)) {
        m_writeOperationList.removeAll(reply);
        emit stateChanged();
    }

    if (!co.sender().isNull()) {
        QMetaObject::invokeMethod(co.sender(), co.slot().toLatin1().data(), Q_ARG(int, id), Q_ARG(QVariant, rsp));
    }
}

