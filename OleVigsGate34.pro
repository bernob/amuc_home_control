QT += qml quick multimedia
android: QT += androidextras sensors
TARGET = touch
!android: !ios: !blackberry: qtHaveModule(widgets): QT += widgets

android: ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources
android: OTHER_FILES += android-sources/AndroidManifest.xml android-sources/src/org/amuc/olevigs/launcher/LauncherClient.java

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
    TimeAndDateBar.qml \
    LightControl.qml \
    Hal9000Button.qml \
    IconCarousel.qml \
    GradientWheel.qml \
    Carousel/ContentModel.qml \
    Carousel/FpsItem.qml \
    Carousel/ListItem.qml \
    Carousel/NMapEffect.qml \
    Carousel/NMapLightSource.qml


RESOURCES += \
    resources.qrc
