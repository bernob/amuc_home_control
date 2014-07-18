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
    Tesla/Car/Tesla.qml \
    Tesla/Car/Tesla.js \
    Tesla/ControlButtons/ToggleButton.qml \
    Tesla/ControlButtons/ControlButtons.qml \
    Tesla/TeslaComponent.qml \
    Tesla/QUItBatteryComponent/QUItBattery.qml \
    TimeAndDateBar.qml \
    Carousel/IconCarousel.qml \
    Carousel/GradientWheel.qml \
    Carousel/ContentModel.qml \
    Carousel/FpsItem.qml \
    Carousel/ListItem.qml \

RESOURCES += \
    resources.qrc
