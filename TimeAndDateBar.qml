import QtQuick 2.0

Item {
    width: parent.width
    height: 200

    Text {
        id: timeAndDate
        anchors.centerIn: parent
        font.bold: true
        font.pixelSize: 72
        color: "white"
        antialiasing: true
    }

    Timer {
        interval: 1000; running: true; repeat: true
        onTriggered: timeAndDate.text = Qt.formatDateTime(new Date(), "dd. MMMM hh:mm:ss")
    }

}
