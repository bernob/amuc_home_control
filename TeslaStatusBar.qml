import QtQuick 2.1
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1

Item {
    property alias startTeslaAppToggle: startTeslaAppToggle
    property alias chargingOn: chargingToggle.checked

    Column {
        anchors.horizontalCenter: parent.horizontalCenter
        spacing: 16
        ToggleButton {
            id: chargingToggle
            checked: true
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
