import QtQuick 2.1
import QtMultimedia 5.3

Item {
    id: root
    width: 256
    height: 256

    property alias halIsAlive: halIsAlive
    property bool checked: false
    signal toggled

    Image {
        id: handle
        anchors.verticalCenter: parent.verticalCenter
        source: "images/hal_9000_off.png"
    }

    Image {
        id: toggle
        anchors.centerIn: parent
        source: "images/hal_9000_on.png"
        opacity: checked ? 1 : 0
        Behavior on opacity {
            NumberAnimation { duration: 200  }
        }
        SequentialAnimation on opacity {
                    id: halIsAlive
                    // Animations on properties start running by default
                    running: false
                    NumberAnimation { from: 0; to: 1; duration: 500; easing.type: Easing.InOutQuad }
                    NumberAnimation { from: 1; to: 0; duration: 500; easing.type: Easing.InOutQuad }
                    NumberAnimation { from: 0; to: 1; duration: 500; easing.type: Easing.InOutQuad }
                    NumberAnimation { from: 1; to: 0; duration: 500; easing.type: Easing.InOutQuad }
                    NumberAnimation { from: 0; to: 1; duration: 500; easing.type: Easing.InOutQuad }
                    NumberAnimation { from: 1; to: checked ? 1 : 0; duration: 500; easing.type: Easing.InOutQuad }
        }
    }

    Image {
        id: buttonIcon
        anchors.centerIn: parent
    }

//    SoundEffect {
//        id: playMoment
//        source: "sounds/moment.wav"
//    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            checked = !checked
            //playMoment.play()
            root.toggled();
        }
    }
}
