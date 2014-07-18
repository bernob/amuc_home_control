import QtQuick 2.3
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1

Item {
    property alias startTeslaAppToggle: startTeslaAppToggle
    property alias chargingOn: chargingToggle.checked

    Column {
        anchors.horizontalCenter: parent.horizontalCenter
        spacing: 24
        ToggleButton {
            id: chargingToggle
            checked: true
            on: "images/outletOn.png"
            off: "images/outletOff.png"
        }
        ToggleButton {
            id: lockedToggle
            on: "images/unlocked.png"
            off: "images/locked.png"
        }
        ToggleButton {
            id: preheatToggle
            on: "images/fanOn.png"
            off: "images/fanOff.png"
        }
        ToggleButton {
            id: startTeslaAppToggle
            on: "images/teslalogo.png"
            off: "images/teslalogo.png"
            onToggled: checked = false;
        }
    }

}
