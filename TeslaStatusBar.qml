import QtQuick 2.1
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import Hue 0.1
import "QUItBatteryComponent"

Item {
    property alias startTeslaAppToggle: startTeslaAppToggle

    width: parent.width
    height: parent.height

    Column{
        anchors.fill: parent

        QUItBattery {
            id: battery
            anchors.horizontalCenter: parent.horizontalCenter
            value: 0.63
            charging: chargingToggle.checked
            maxLiquidRotation: 0
            rotation: 0
        }
        // Add mirror effect
        ShaderEffect {
            property variant source: ShaderEffectSource { sourceItem: battery; hideSource: false }

            anchors.top: battery.bottom
            width: battery.width
            height: battery.height

            fragmentShader: "
                varying highp vec2 qt_TexCoord0;
                uniform highp float qt_Opacity;
                uniform sampler2D source;
                void main(void) {
                    highp vec2 pos = vec2(qt_TexCoord0.x, (1.0 - qt_TexCoord0.y*0.8));
                    pos.x += (qt_TexCoord0.y*0.2) * (pos.x * -1.0 + 1.0);
                    highp vec4 pix = texture2D(source, pos);
                    pix *= (0.4 - qt_TexCoord0.y*0.5) * min(qt_TexCoord0.y*5.0, 1.0);
                    gl_FragColor = pix * qt_Opacity;
                }"
        }
        Row {
            anchors.centerIn: parent
            spacing: 16
            ToggleButton {
                id: chargingToggle
                icon: "images/plug.png"
            }
            ToggleButton {
                id: lockedToggle
                icon: checked ? "images/locked.png" : "images/ulocked.png"
            }
            ToggleButton {
                id: preheatToggle
                icon: "images/fan.png"
            }
            ToggleButton {
                id: startTeslaAppToggle
                icon: "images/teslalogo.png"
                onToggled: checked = false;
            }
        }

    }
}
