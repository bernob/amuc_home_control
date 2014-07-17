import QtQuick 2.1

Item {
    id: root
    width: 128
    height: 128

    property bool checked: false
    property alias icon: buttonIcon.source
    property alias off: handle.source
    property alias on: toggle.source

    signal toggled

    Image {
        id: handle
        anchors.centerIn: parent
        source: "images/handle.png"
        opacity: checked ? 0 : 1
        Behavior on opacity {
            NumberAnimation { duration: 200 }
        }
    }

    Image {
        id: toggle
        anchors.centerIn: parent
        source: "images/toggle.png"
        opacity: checked ? 1 : 0
        Behavior on opacity {
            NumberAnimation { duration: 200 }
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
