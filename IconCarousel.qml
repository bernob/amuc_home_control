import QtQuick 2.3
import Hue 0.1
import "Carousel"

Item {
    id: root

    property int groupId: 0
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

    //Physical spotlight groups
    Groups {
        id: groups
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
        visible: true
        model: listModel
        delegate: ListItem {
            onIsSelectedChanged: {
                if (isSelected) {
                    groupId = model.name === "Living Room" ? 1 : model.name === "Library" ? 2 : model.name === "Dining Table" ? 3 : model.name === "TV" ? 4 : 0
                    nameTextItem.text = groups.get(groupId).bri + "/255"
                }
            }
        }
        path: Path {
            startX: root.width*0.5; startY: root.height*0.68
            PathAttribute { name: "iconScale"; value: 1.4 }
            PathAttribute { name: "iconZ"; value: 100.0 }
            PathAttribute { name: "iconFog"; value: 0.0 }
            PathQuad { x: root.width*0.5; y: root.height*0.2; controlX: root.width*1.1; controlY: root.height*0.2 }
            PathAttribute { name: "iconScale"; value: 0.8 }
            PathAttribute { name: "iconZ"; value: 1.0 }
            PathAttribute { name: "iconFog"; value: 0.5 }
            PathQuad { x: root.width*0.5; y: root.height*0.68; controlX: -root.width*0.1; controlY: root.height*0.2 }
        }
    }

    Text {
        id: nameTextItem
        anchors.centerIn: pathView
        anchors.verticalCenterOffset: -50
        font.pixelSize: 48
        color: "#d0d0d0"
        style: Text.Outline
        styleColor: "#f0f0f0"
        visible: true
    }

    Item {
        id: wheelContainer
        height: 512; width: height
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: pathView.bottom
        anchors.bottomMargin: -300

        GradientWheel {
            id: gradientWheel


            onBrightnessLevelChanged: {
                if(groups.get(groupId) && !timer.running) {
                    groups.get(groupId).bri = brightnessLevel
                    timer.start()
                }
            }
            onColorLevelChanged: {
                if(groups.get(groupId) && !timer.running) {
                    groups.get(groupId).color = colorLevel
                    timer.start()
                }
            }
        }

        NMapEffect {
            id: gradientWheelNormalMap
            sourceGraphics: gradientWheel
            normalsImage: "images/gradient_wheel_n.png"
            lightSource: lightSourceItem
            switchX: true
            switchY: true
            elementPositionX: wheelContainer.x
            elementPositionY: wheelContainer.y
            colorizeAmount: 0.2
            diffuseBoost: 0.5
        }

        Timer {
            id: timer
            interval: 500
        }
    }
}
