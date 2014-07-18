import QtQuick 2.3

Item {
    id: root

    ContentModel {
        id: listModel
    }

    //Defines the path we can drag icons along and how they scale depending on position
    PathView {
        id: pathView
        anchors.fill: parent
        interactive: false
        visible: true
        model: listModel
        delegate: ListItem {
            onBrightnessLevelChanged:
            {
              if(groups.get(model.groupId) && !timer.running) {
                  groups.get(model.groupId).bri = brightnessLevel
                  timer.start()
              }
            }
            onPowerOnChanged: {
                if(!groups.get(model.groupId) || timer.running)
                    return
                groups.get(model.groupId).on = powerOn
            }

            Timer {
                id: startDelay
                interval: 1000
                running: true
                onTriggered: {
                    if(groups.get(model.groupId))
                        powerOn = groups.get(model.groupId).on
                }

            }
        }
        path: Path {
            startX: root.width*0.5; startY: root.height*0.68
            PathAttribute { name: "iconScale"; value: 1.0 }
            PathAttribute { name: "iconZ"; value: 100.0 }
            PathQuad { x: root.width*0.5; y: root.height*0.30; controlX: root.width*1.1; controlY: root.height*0.30 }
            PathAttribute { name: "iconScale"; value: 0.4 }
            PathAttribute { name: "iconZ"; value: 1.0 }
            PathQuad { x: root.width*0.5; y: root.height*0.68; controlX: -root.width*0.1; controlY: root.height*0.30 }
        }
    }

    Timer {
        id: timer
        interval: 500
    }
}
