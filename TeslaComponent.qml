import QtQuick 2.3
import "tesla"
import "QUItBatteryComponent"

Item {
    id: teslaComponent
    width: 1280
    height: 640

    Tesla {
        id: tesla
        anchors.top: parent.top
        anchors.topMargin: 100
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -20
    }

    // Add mirror effect to car
    ShaderEffect {
        anchors.top: tesla.bottom
        anchors.topMargin: -38
        anchors.left: tesla.left
        width: tesla.width
        height: tesla.height
        property variant source: ShaderEffectSource { sourceItem: tesla; hideSource: false }

        fragmentShader: "
            varying highp vec2 qt_TexCoord0;
            uniform highp float qt_Opacity;
            uniform sampler2D source;
            void main(void) {
                highp vec2 pos = vec2(qt_TexCoord0.x, (1.0 - qt_TexCoord0.y*0.8));
                pos.x += (qt_TexCoord0.y*0.2) * (pos.x * -1.0 + 1.0);
                highp vec4 pix = texture2D(source, pos);
                pix *= (0.4 - qt_TexCoord0.y*0.5) * min(qt_TexCoord0.y*5.0, 1.0)*1.7;
                gl_FragColor = pix * qt_Opacity;
            }"
    }

    TeslaStatusBar {
        id: teslaStatusBar
        height: 300; width: 50;
        anchors.bottom: tesla.bottom
        anchors.bottomMargin: 25
        anchors.left: parent.left
        anchors.leftMargin: 90
        startTeslaAppToggle.onToggled: launcherClient.launchApp("com.teslamotors.tesla")
    }

    QUItBattery {
        id: battery
        anchors.bottom: tesla.bottom
        anchors.bottomMargin: 15
        anchors.right: parent.right
        anchors.rightMargin: -35
        value: 0.0
        charging: teslaStatusBar.chargingOn
        maxLiquidRotation: 0
        rotation: -90

        SequentialAnimation on value {
            loops: Animation.Infinite
            running: teslaStatusBar.chargingOn
            NumberAnimation { to: 1.0; duration: 200000; easing.type: Easing.Linear; easing.period: 1000 }
            NumberAnimation { to: 0.0; duration: 5000; easing.type: Easing.Linear }
        }
    }


}
