import QtQuick 2.1
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import Hue 0.1
import "QUItBatteryComponent"

Item {
    property alias startTeslaAppToggle: startTeslaAppToggle

    width: parent.width
    height: parent.height

    Column{
        anchors.fill: parent

        QUItBattery {
            id: battery
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.horizontalCenter: parent.horizontalCenter
            value: slider.value
            charging: chargingToggle.checked
            maxLiquidRotation: liquidToggle.checked ? 50 : 0
            rotation: 0//-90
//            SequentialAnimation on rotation {
//                running: rotateToggle.checked
//                loops: Animation.Infinite
//                NumberAnimation { to: -120; duration: 2000; easing.type: Easing.InOutQuad }
//                NumberAnimation { to: -70; duration: 1000; easing.type: Easing.InOutQuad }
//            }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 24
            spacing: 16
            ToggleButton {
                id: chargingToggle
                icon: "images/plug.png"
            }
            ToggleButton {
                id: glassToggle
                icon: "images/glass.png"
            }
            ToggleButton {
                id: preheatToggle
                icon: "images/rotate.png"
            }
            ToggleButton {
                id: startTeslaAppToggle
                icon: "images/teslalogo.png"
            }
        }

    }
    MouseArea {
        id: clickableArea
        anchors.fill: parent
    }
}
