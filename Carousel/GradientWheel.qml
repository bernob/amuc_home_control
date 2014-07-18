import QtQuick 2.3;
import QtGraphicalEffects 1.0;

Item {
    id: container;
    width: 256;
    height: width;
    anchors.centerIn: parent;

    property real centerX : (width / 2);
    property real centerY : (height / 2);
    property int brightnessLevel: 0;
    property int colorLevel: 0;
    property string offsource;
    property string onsource;
    property bool powerOn: true;
    property alias powerButton: powerButtonMouseArea;
    property alias brightnessCircle: brightnessCircleMouseArea

    Image {
        id: mainIcon;
        source: powerOn ? onsource : offsource
        anchors.fill: parent;
    }

    Rectangle {
        id: brightnessCircle;
        color: "transparent";
        transformOrigin: Item.Center;
        radius: (width / 2);
        antialiasing: true;
        anchors.fill: parent;
        rotation: 45

        Image {
            id: brightnessHandle;
            source: "images/sliderknob.png"
            anchors {
                bottom: parent.bottom;
                margins: 20;
                horizontalCenter: parent.horizontalCenter;
            }
        }
    }
    MouseArea{
        id: brightnessCircleMouseArea
        anchors.fill: parent;
        onPositionChanged:  {
            var point =  mapToItem (container, mouse.x, mouse.y)
            var diffX = (point.x - container.centerX)
            var diffY = -1 * (point.y - container.centerY)

            rotate(diffX, diffY, brightnessCircle)
        }
        onReleased: {
            brightnessLevel = Math.round(((brightnessCircle.rotation - 45) * 255 ) / 360)
        }
    }

    Rectangle {
        id: powerButtonArea;
        width: parent.width - 120; height: width
        anchors.centerIn: parent
        color: "transparent";
        transformOrigin: Item.Center;
        radius: width / 2;
        antialiasing: true

        MouseArea {
            id: powerButtonMouseArea
            anchors.fill: parent
        }
    }

    function rotate(dX, dY, imageToRotate){
        var rad = Math.atan (dY / dX)
        var deg = (rad * 180 / Math.PI)
        if (dX > 0 && dY > 0) {
            imageToRotate.rotation = 270 - Math.abs (deg)
        }
        else if (dX > 0 && dY < 0) {
            imageToRotate.rotation = 270 + Math.abs (deg)
        }
        else if (dX < 0 && dY > 0) {
            imageToRotate.rotation = 90 + Math.abs (deg)
        }
        else if (dX < 0 && dY < 0) {
            imageToRotate.rotation = 90 - Math.abs (deg)
        }
        if(imageToRotate.rotation > 315)
            imageToRotate.rotation = 315
        else if(imageToRotate.rotation < 45)
            imageToRotate.rotation = 45
    }
}
