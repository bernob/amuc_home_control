import QtQuick 2.3

Item {
    id: root
    width: 256
    height: 256

    property string name: model.name
    property alias brightnessLevel: gradientWheel.brightnessLevel
    property bool isSelected: pathView.currentIndex === model.index
    property real fogAmount: PathView.iconFog

    z: PathView.iconZ
    scale: PathView.iconScale


    Item {
        id: wheelContainer
        height: 256; width: height
        anchors.horizontalCenter: root.horizontalCenter

        GradientWheel {
            id: gradientWheel
            onsource: model.onsource
            offsource: model.offsource

            powerButton.onClicked: {
                if (isSelected) {
                    gradientWheel.powerOn = !gradientWheel.powerOn
                } else {
                    pathView.currentIndex = model.index;
                }
            }
        }
    }
}
