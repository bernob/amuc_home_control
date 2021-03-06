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

import QtQuick 2.1
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import "Carousel"
import "Tesla"
import Hue 0.1
//import LauncherClient 0.1

ApplicationWindow {
    id: mainView
    visible: true
    width: 1200
    height: 1920 //1200
    color: "#E0E0E0"

//    LauncherClient {
//        id: launcherClient
//    }
    //Physical spotlight groups
    Groups {
        id: groups
    }

    TimeAndDateBar {
        id: timeAndDateBar
        width: parent.width; height: 200;
    }

    //Should include touch&hold menu to scheduel lights and attach events
    IconCarousel {
        id: lightControl
        width: parent.width
        height: 640
        //anchors.top: parent.top
        anchors.topMargin: 50
        anchors.top: timeAndDateBar.bottom
    }

    TeslaComponent {
        id: teslaComponent
        anchors.bottom: componentsSelector.top
        anchors.horizontalCenter: parent.horizontalCenter
    }

    ComponentsSelector {
        id: componentsSelector
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }

//    FpsItem {
//        id: fpsItem
//    }
}
