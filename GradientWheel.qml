import QtQuick 2.3;
import QtGraphicalEffects 1.0;

    Item {
        id: container;
        width: 512;
        height: width;
        anchors.centerIn: parent;

        property real centerX : (width / 2);
        property real centerY : (height / 2);
        property int brightnessLevel: 0;
        property int colorLevel: 0;


            Rectangle {
                id: handle;
                color: "transparent";
                width: 512;
                height: width;
                radius: (width / 2);
                antialiasing: true;
                anchors {
                    top: parent.top;
                    margins: 10;
                    horizontalCenter: parent.horizontalCenter;
                }

                MouseArea{
                    anchors.fill: parent;
                    onPositionChanged:  {
                        var point =  mapToItem (container, mouse.x, mouse.y);
                        var diffX = (point.x - container.centerX);
                        var diffY = -1 * (point.y - container.centerY);
                        var imageToRotate = brightnessCircle;

                        //Length of vector from center to mouse tells us which circle we are currently in
                        var distanceFromCenter = Math.sqrt(diffX*diffX + diffY*diffY);

                        if(distanceFromCenter < 250 && distanceFromCenter > 187) {
                            imageToRotate = brightnessCircle;
                        } else if ((distanceFromCenter <= 187 && distanceFromCenter > 100)) {
                            imageToRotate = colorCircle
                        }

                        var rad = Math.atan (diffY / diffX);
                        var deg = (rad * 180 / Math.PI);
                        if (diffX > 0 && diffY > 0) {
                            imageToRotate.rotation = 90 - Math.abs (deg);
                        }
                        else if (diffX > 0 && diffY < 0) {
                            imageToRotate.rotation = 90 + Math.abs (deg);
                        }
                        else if (diffX < 0 && diffY > 0) {
                            imageToRotate.rotation = 270 + Math.abs (deg);
                        }
                        else if (diffX < 0 && diffY < 0) {
                            imageToRotate.rotation = 270 - Math.abs (deg);
                        }

                    }
                    onReleased: {
                        brightnessLevel = Math.round((brightnessCircle.rotation * 255 ) / 360);
                        colorLevel = Math.round((colorCircle.rotation * 255 ) / 360);
                    }
                }
            }

            Image {
                id: outerCircle;
                source: "images/gradient_wheel_outer_circle.png"
                anchors.fill: parent;
            }

            Image {
                id: brightnessCircle;
                source: "images/gradient_wheel_brightness_circle.png"
                anchors.fill: parent;
            }

            Image {
                id: middleSurface;
                source: "images/gradient_wheel_middle_surface.png"
                anchors.fill: parent;
            }

            Image {
                id: colorCircle;
                source: "images/gradient_wheel_color_circle.png"
                anchors.fill: parent;
            }

            Image {
                id: innerCircle;
                source: "images/gradient_wheel_inner_circle.png"
                anchors.fill: parent;
            }
        Text {
            id: brightnessText
            text: "Brightness: %1%".arg(brightnessLevel);
            font {
                pixelSize: 20;
                bold: true;
            }
            anchors.centerIn: parent;
        }

        Text {
            text: "Color: %1%".arg(colorLevel);
            font {
                pixelSize: 20;
                bold: true;
            }
            anchors.horizontalCenter: parent.horizontalCenter;
            anchors.top: brightnessText.bottom
        }
    }
