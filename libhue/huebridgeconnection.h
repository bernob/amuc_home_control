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

#ifndef HUEBRIDGECONNECTION_H
#define HUEBRIDGECONNECTION_H

#include <QObject>
#include <QHash>
#include <QHostAddress>
#include <QVariantMap>
#include <QPointer>

#define BRIDGE_IP (192U << 24) + (168U << 16) + (1U << 8) + (29U)

class QNetworkAccessManager;
class QNetworkReply;

class CallbackObject
{
public:
    CallbackObject(QPointer<QObject> sender = 0, const QString &slot = QString()):
        m_sender(sender),
        m_slot(slot)
    {}
    QPointer<QObject> sender() const { return m_sender; }
    QString slot() const { return m_slot; }
private:
    QPointer<QObject> m_sender;
    QString m_slot;
};

class HueBridgeConnection: public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString apiKey READ apiKey WRITE setApiKey NOTIFY apiKeyChanged)

public:
    static HueBridgeConnection* instance();

    QString apiKey() const { return m_apiKey; }
    void setApiKey(const QString &apiKey)
    {
        if (m_apiKey != apiKey) {
            m_apiKey = apiKey;
            emit apiKeyChanged();
        }
    }

    int get(const QString &path, QObject *sender, const QString &slot);
    int deleteResource(const QString &path, QObject *sender, const QString &slot);
    int post(const QString &path, const QVariantMap &params, QObject *sender, const QString &slot);
    int put(const QString &path, const QVariantMap &params, QObject *sender, const QString &slot);  

signals:
    void apiKeyChanged();
    void stateChanged();

private slots:
    void slotOpFinished();

private:
    HueBridgeConnection();
    static HueBridgeConnection *s_instance;

    QNetworkAccessManager *m_nam;

    QHostAddress m_bridge;
    bool m_discoveryError;
    QString m_apiKey;
    QString m_baseApiUrl;

    int m_requestCounter;
    QHash<QNetworkReply*, int> m_requestIdMap;
    QHash<int, CallbackObject> m_requestSenderMap;

    // This is used to store write operations so clients can be notfied to refresh after those succeed.
    QList<QNetworkReply*> m_writeOperationList;
};

#endif
