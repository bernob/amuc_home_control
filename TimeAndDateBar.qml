import QtQuick 2.1

Item {
    width: parent.width
    height: 200

    Text {
        id: timeAndDate
        anchors.centerIn: parent
        color: "white"
        font.bold: true
        font.pixelSize: 108
        antialiasing: true
    }


    Timer {
        interval: 1000; running: true; repeat: true
        property int previousLux: 0
        onTriggered: {
            timeAndDate.text = Qt.formatDateTime(new Date(), "dd. MMMM hh:mm:ss")
        }
    }

}
