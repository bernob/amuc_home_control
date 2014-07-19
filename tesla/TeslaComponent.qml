import QtQuick 2.3
import "Car"
import "ControlButtons"
import "QUItBatteryComponent"

Item {
    id: teslaComponent
    width: 1080
    height: 640
    Image {
        id: frame
        anchors.centerIn: parent
        source: "../images/component_frame.png"
    }

    Tesla {
        id: tesla
        anchors.centerIn: parent
    }

    // Add mirror effect to car
    ShaderEffect {
        anchors.top: tesla.bottom
        anchors.topMargin: -165
        anchors.horizontalCenter: tesla.horizontalCenter
        width: tesla.width
        height: tesla.height
        property variant source: ShaderEffectSource { sourceItem: tesla; hideSource: false }

        fragmentShader: "
            varying highp vec2 qt_TexCoord0;
            uniform highp float qt_Opacity;
            uniform sampler2D source;
            void main(void) {
                highp vec2 pos = vec2(qt_TexCoord0.x, (1.0 - qt_TexCoord0.y*0.95));
                pos.x += (qt_TexCoord0.y*0.1) * (pos.x * -1.0 + 1.0);
                highp vec4 pix = texture2D(source, pos);
                pix *= (0.4 - qt_TexCoord0.y*0.5) * min(qt_TexCoord0.y*5.0, 1.0)*1.7;
                gl_FragColor = pix * qt_Opacity;
            }"
    }

    ControlButtons {
        id: controlButtons
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 90
        startTeslaAppToggle.onToggled: launcherClient.launchApp("com.teslamotors.tesla")
    }

    QUItBattery {
        id: battery
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 250
        anchors.right: parent.right
        anchors.rightMargin: -35
        value: 0.0
        charging: controlButtons.chargingOn
        maxLiquidRotation: 0
        rotation: -90

        SequentialAnimation on value {
            loops: Animation.Infinite
            running: controlButtons.chargingOn
            NumberAnimation { to: 1.0; duration: 2000000; easing.type: Easing.Linear; easing.period: 1000 }
            NumberAnimation { to: 0.0; duration: 5000; easing.type: Easing.Linear }
        }
    }


}
