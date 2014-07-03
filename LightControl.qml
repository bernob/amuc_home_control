import QtQuick 2.0
import QtSensors 5.3
import Hue 0.1

Item {
    property int groupId: livingRoom.checked ? 1 : diningTable.checked ? 2 : library.checked ? 3 : tv.checked ? 4 : 0
    onGroupIdChanged: if(groupId != 0) brightnessSlider.value = groups.get(groupId).bri

    width: parent.width; height: parent.height;

    Groups {
        id: groups
    }

    Hal9000Button {
        id: hal9000Button
        anchors.centerIn: parent
        onToggled: {
            if(groups.count > 0) groups.get(1).on = !groups.get(1).on
        }
    }

    Slider {
        id: brightnessSlider
        width: 600
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: hal9000Button.bottom
        anchors.topMargin: 30
        minimum: 0
        maximum: 255
        onValueChanged: {
            groups.get(groupId).bri = value
            hal9000Button.halIsAlive.start()
        }
    }

    Row {
        anchors.top: brightnessSlider.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottomMargin: 24
        spacing: 16
        ToggleButton {
            id: livingRoom
            icon: "images/plug.png"
            onCheckedChanged: {
                if(checked) {
                    diningTable.checked = false
                    library.checked = false
                    tv.checked = false
                }
            }
        }
        ToggleButton {
            id: diningTable
            icon: "images/glass.png"
            onCheckedChanged: {
                if(checked) {
                    livingRoom.checked = false
                    library.checked = false
                    tv.checked = false
                }
            }
        }
        ToggleButton {
            id: library
            icon: "images/rotate.png"
            onCheckedChanged: {
                if(checked) {
                    livingRoom.checked = false
                    diningTable.checked = false
                    tv.checked = false
                }
            }
        }
        ToggleButton {
            id: tv
            icon: "images/teslalogo.png"
            onCheckedChanged: {
                if(checked) {
                    livingRoom.checked = false
                    diningTable.checked = false
                    library.checked = false
                }
            }
        }
        ToggleButton {
            id: startHueAppToggle
            icon: "images/teslalogo.png"
            onCheckedChanged: {
                if(checked) {
                    startHueAppToggle.checked = false
                    launcherClient.launchApp("com.philips.lighting.hue")
                }
            }
        }
    }

//    LightSensor {
//        id: lightSensor
//        active: true
//        alwaysOn: true
//    }

//    Timer {
//        running: true
//        repeat: true
//        interval: 1000
//        property int previousLux: 0

//        onTriggered:  {
//            if((previousLux < 150) && (lightSensor.reading.illuminance < 150)) {
//                if(!groups.get(1).on)
//                    groups.get(1).on = true
//            }
//            previousLux = lightSensor.reading.illuminance
//        }
//    }


    Timer {
        running: true
        repeat: false
        interval: 5000
        onTriggered: {
            hal9000Button.checked = groups.get(1).on
            brightnessSlider.value = groups.get(1).bri
            groups.get(1).color = "#778F18"
        }
    }
}
