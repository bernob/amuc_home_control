import QtQuick 2.1

Item {
    width: parent.width
    height: 200

    Text {
        id: timeAndDate
        anchors.centerIn: parent
        color: "#0F0F0F"
        style: Text.Outline
        styleColor: "#FCFCFC"
        font.pixelSize: 108
        font.bold: true
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
