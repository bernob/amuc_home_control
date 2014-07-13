import QtQuick 2.3
import "Carousel"

Item {
    id: root
    //Spotlight direction animation
    QtObject {
        id: settings
        property real spotAnimationPosition: 0.0
        SequentialAnimation on spotAnimationPosition {
            loops: Animation.Infinite
            NumberAnimation { to: 30; duration: 2000; easing.type: Easing.InOutQuad }
            NumberAnimation { to: 0; duration: 2000; easing.type: Easing.InOutQuad }
        }
    }

    //List of icons with normalmaps and shadows
    ContentModel {
        id: listModel
    }

    //Lightsource
    NMapLightSource {
        id: lightSourceItem
        z: 10
        lightPosX: root.width * 0.5
        lightPosY: root.height * 0.5 - settings.spotAnimationPosition * 5
        lightIntensity: 0.5
    }

    //Defines the path we can drag icons along and how they scale depending on position
    PathView {
        id: pathView
        anchors.fill: parent
        model: listModel
        delegate: ListItem {
            onIsSelectedChanged: {
                if (isSelected) {
                    nameTextItem.text = model.name
                }
            }
        }
        path: Path {
            startX: root.width*0.5; startY: root.height*0.6
            PathAttribute { name: "iconScale"; value: 1.4 }
            PathAttribute { name: "iconZ"; value: 100.0 }
            PathAttribute { name: "iconFog"; value: 0.0 }
            PathQuad { x: root.width*0.5; y: root.height*0.3; controlX: root.width*1.1; controlY: root.height*0.3 }
            PathAttribute { name: "iconScale"; value: 0.8 }
            PathAttribute { name: "iconZ"; value: 1.0 }
            PathAttribute { name: "iconFog"; value: 0.5 }
            PathQuad { x: root.width*0.5; y: root.height*0.6; controlX: -root.width*0.1; controlY: root.height*0.3 }
        }
    }

    Text {
        id: nameTextItem
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -80
        anchors.bottom: parent.bottom
        anchors.bottomMargin: parent.height * 0.15
        font.pixelSize: 68
        color: "#d0d0d0"
        style: Text.Outline
        styleColor: "#f0f0f0"
        visible: true
    }
}
