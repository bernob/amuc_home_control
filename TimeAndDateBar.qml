import QtQuick 2.1
import QtSensors 5.3

Item {
    width: parent.width
    height: 200

    Text {
        id: timeAndDate
        anchors.centerIn: parent
        font.bold: true
        font.pixelSize: 92
        color: "white"
        antialiasing: true
    }

    LightSensor {
        id: lightSensor
        alwaysOn: true
    }

    Timer {
        interval: 1000; running: true; repeat: true
        onTriggered: {

            timeAndDate.text = Qt.formatDateTime(new Date(), "dd. MMMM hh:mm:ss") + " LL: " + lightSensor.reading.value
        }
    }

}
