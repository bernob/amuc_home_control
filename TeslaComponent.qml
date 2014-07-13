import QtQuick 2.3
import "tesla"
import "QUItBatteryComponent"

Item {
    id: teslaComponent
    anchors.top: lights.bottom
    anchors.left: lights.left
    width: parent.width
    height: 750

    Tesla {
        id: tesla
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -50
    }

    // Add mirror effect to car
    ShaderEffect {
        anchors.top: tesla.bottom
        anchors.topMargin: -30
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
                pix *= (0.4 - qt_TexCoord0.y*0.5) * min(qt_TexCoord0.y*5.0, 1.0);
                gl_FragColor = pix * qt_Opacity;
            }"
    }

    TeslaStatusBar {
        id: teslaStatusBar
        height: 500; width: 100;
        anchors.top: parent.top
        anchors.topMargin: 10
        anchors.left: parent.left
        anchors.leftMargin: 30
        startTeslaAppToggle.onToggled: launcherClient.launchApp("com.teslamotors.tesla")
    }

    QUItBattery {
        id: battery
        anchors.bottom: tesla.bottom
        anchors.bottomMargin: 175
        anchors.right: parent.right
        anchors.rightMargin: -100
        value: 0.90
        charging: teslaStatusBar.chargingOn
        maxLiquidRotation: 0
        rotation: -90
    }


}
