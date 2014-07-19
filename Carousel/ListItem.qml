import QtQuick 2.3

Item {
    id: root
    width: 320
    height: 320

    property string name: model.name
    property alias brightnessLevel: gradientWheel.brightnessLevel
    property alias powerOn: gradientWheel.powerOn
    property bool isSelected: pathView.currentIndex === model.index

    z: PathView.iconZ
    scale: PathView.iconScale


    Item {
        id: wheelContainer
        height: parent.height; width: height
        anchors.horizontalCenter: root.horizontalCenter

        GradientWheel {
            id: gradientWheel
            onsource: model.onsource
            offsource: model.offsource
            brightnessCircle.enabled: isSelected

            powerButton.onClicked: {
                if (isSelected) {
                    gradientWheel.powerOn = !gradientWheel.powerOn
                }
            }
        }
    }
//    MouseArea {
//        anchors.fill: parent
//        propagateComposedEvents: true
//        onClicked: {
//            if (!isSelected)
//                pathView.currentIndex = model.index
//            mouse.accepted = false
//        }
//    }
}
