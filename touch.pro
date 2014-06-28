QT += qml quick
TARGET = touch
!android: !ios: !blackberry: qtHaveModule(widgets): QT += widgets

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
    hue/Shine.qml

RESOURCES += \
    resources.qrc
