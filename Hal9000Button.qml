import QtQuick 2.1

Item {
    id: root
    width: 256
    height: 256

    property bool checked: false
    signal toggled

    Image {
        id: handle
        anchors.verticalCenter: parent.verticalCenter
        source: "images/hal_9000_off.png"
        opacity: checked ? 0 : 1
        Behavior on opacity {
            NumberAnimation { duration: 400 }
        }
    }

    Image {
        id: toggle
        anchors.centerIn: parent
        source: "images/hal_9000_on.png"
        opacity: checked ? 1 : 0
        Behavior on opacity {
            NumberAnimation { duration: 200  }
        }
    }

    Image {
        id: buttonIcon
        anchors.centerIn: parent
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            checked = !checked
            root.toggled();
        }
    }
}
