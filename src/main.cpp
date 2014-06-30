/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Quick Controls module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qtquickcontrolsapplication.h"
#include <QtQml/QQmlApplicationEngine>
#include <QQmlContext>
#include <QDir>
#include <QtQml/qqml.h>

#include "../libhue/huebridgeconnection.h"
#include "../libhue/lights.h"
#include "../libhue/light.h"
#include "../libhue/groups.h"
#include "../libhue/group.h"
#include "../libhue/lightsfiltermodel.h"
#include "launcherclient.h"

static QObject* hueBridgeInstance(QQmlEngine* /* engine */, QJSEngine* /* scriptEngine */)
{
    return HueBridgeConnection::instance();
}

int main(int argc, char *argv[])
{
    QtQuickControlsApplication app(argc, argv);

    const char* uri = "Hue";
    HueBridgeConnection::instance();
    qmlRegisterSingletonType<HueBridgeConnection>(uri, 0, 1, "HueBridge", hueBridgeInstance);
    qmlRegisterType<Lights>(uri, 0, 1, "Lights");
    qmlRegisterUncreatableType<Light>(uri, 0, 1, "Light", "Cannot create lights. Get them from the Lights model.");
    qmlRegisterUncreatableType<LightInterface>(uri, 0, 1, "LightInterface", "Abstract interface.");
    qmlRegisterType<Groups>(uri, 0, 1, "Groups");
    //FIXME: eventually creatable
    qmlRegisterUncreatableType<Group>(uri, 0, 1, "Group", "Cannot create groups. Get them from the Groups model.");
    qmlRegisterType<LightsFilterModel>(uri, 0, 1, "LightsFilterModel");
    qmlRegisterType<LauncherClient>(uri, 0, 1, "LauncherClient");

    //QQmlApplicationEngine engine(QUrl("qrc:/hue/Shine.qml"));
    QQmlApplicationEngine engine(QUrl("qrc:/main.qml"));


    return app.exec();
}
