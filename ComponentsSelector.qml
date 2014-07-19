import QtQuick 2.0

Item {
    width: 1080
    height: 320

    Image {
        id: frame
        anchors.centerIn: parent
        source: "images/small_component_frame.png"
    }

    Row {
        anchors.centerIn: parent
        Image {
            width: 128; height: width;
            source: "images/light-bulb-icon.png"
        }
        Image {
            width: 128; height: width;
            source: "images/teslachrome.png"
        }
        Image {
            width: 128; height: width;
            source: "images/lock.png"
        }
        Image {
            source: ""
        }
    }
}
