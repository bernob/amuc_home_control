QT += qml quick androidextras sensors multimedia
TARGET = touch
!android: !ios: !blackberry: qtHaveModule(widgets): QT += widgets

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

include(src/src.pri)
include(libhue/libhue.pri)
include(../shared/shared.pri)

OTHER_FILES += \
    main.qml \
    tesla/Tesla.qml \
    tesla/Car.js \
    hue/ColorPicker.qml \
    hue/ColorPickerCt.qml \
    hue/GroupsTab.qml \
    hue/LightsControl.qml \
    hue/LightsTab.qml \
    hue/NewGroupWindow.qml \
    hue/Shine.qml \
    TeslaStatusBar.qml \
    QUItBatteryComponent/QUItBattery.qml \
    Slider.qml \
    ToggleButton.qml \
    android-sources/AndroidManifest.xml \
    android-sources/src/org/amuc/olevigs/launcher/LauncherClient.java \
    TimeAndDateBar.qml \
    LightControl.qml \
    Hal9000Button.qml


RESOURCES += \
    resources.qrc
