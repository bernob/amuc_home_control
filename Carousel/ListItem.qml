import QtQuick 2.0

Item {
    id: root
    width: 256
    height: 256

    property string name: model.name
    property bool isSelected: pathView.currentIndex === model.index
    property real fogAmount: PathView.iconFog

    z: PathView.iconZ
    scale: PathView.iconScale

    Image {
        id: shadowSource
        source: model.shadowIcon
        width: nmapItem.width
        height: nmapItem.height
        anchors.centerIn: nmapItem
        anchors.horizontalCenterOffset: ((root.x + root.width/2) - (lightSourceItem.width/2)) * 0.05
        anchors.verticalCenterOffset: ((root.y + root.height/2) - (lightSourceItem.height/2)) * 0.05 + (settings.spotAnimationPosition - 25) * (0.8 - fogAmount)
        opacity: 0.2 + (fogAmount*0.8)
        scale: 1.2 - (fogAmount*0.4)
    }

    Image {
        id:sourceIcon
        source: model.sourceIcon
    }

    NMapEffect {
        id: nmapItem
        sourceGraphics: sourceIcon
        normalsImage: model.normalsIcon
        lightSource: lightSourceItem
        switchX: true
        switchY: true
        elementPositionX: root.x
        elementPositionY: root.y
        colorizeAmount: fogAmount
        diffuseBoost: 0.5
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            if (isSelected) {
                // TODO: Open the item
            } else {
                pathView.currentIndex = model.index;
            }
        }
    }
}
