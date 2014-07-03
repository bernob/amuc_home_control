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
            anchors.horizontalCenter: parent.horizontalCenter
            value: 0.63
            charging: chargingToggle.checked
            maxLiquidRotation: 0
            rotation: 0
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottomMargin: 24
            spacing: 16
            ToggleButton {
                id: chargingToggle
                icon: "images/plug.png"
            }
            ToggleButton {
                id: lockedToggle
                icon: checked ? "images/locked.png" : "images/ulocked.png"
            }
            ToggleButton {
                id: preheatToggle
                icon: "images/fan.png"
            }
            ToggleButton {
                id: startTeslaAppToggle
                icon: "images/teslalogo.png"
                onToggled: checked = false;
            }
        }

    }
}
