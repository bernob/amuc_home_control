import QtQuick 2.0
import Hue 0.1

Item {
    width: parent.width; height: parent.height;

    Lights {
        id: lightsModel
    }
    Groups {
        id: groups
    }

    Hal9000Button {
        id: hal9000Button
        anchors.centerIn: parent
        onToggled: {
            //launcherClient.launchApp("com.philips.lighting.hue")
            groups.get(0).on = !groups.get(0).on
        }
    }

    Timer {
        running: true
        repeat: false
        interval: 5000
        onTriggered: hal9000Button.checked = !groups.get(0).on
    }
}
