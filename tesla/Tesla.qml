import QtQuick 2.1
import "Car.js" as TeslaAPI

Item {
    width: parent.width
    height: parent.height
    property int _id: 13598
    property string chargingState
    property int batteryLevel
    property string response
    property bool trunk_is_open: false
    property string sunroof_state: "closed"
    property bool frunk_is_open: false
    property bool driver_front_door_is_open: false
    property var driver_front_door_clicked
    property bool driver_back_door_is_open: false
    property bool passanger_front_door_is_open: false
    property var passanger_front_door_clicked
    property bool passanger_back_door_is_open: false
    property bool charge_cable_is_connected: true
    property bool charge_port_is_open: true
    property bool is_locked: true
    property bool climate_car_is_cold: false
    property bool climate_car_is_hot: false
    property bool nav_clim_is_on: false
    property int temperature: 0

    antialiasing: true

    Item {
        id: teslaContainer
        //scale: 1.33

        Text {
            id: status_text
            anchors.top: parent.top
            anchors.topMargin: 10
            anchors.horizontalCenter: parent.horizontalCenter
            color: "white"
            font.pixelSize: 24
        }

//        Image {
//            id: car_bg
//            visible: true
//            scale: 1
//            anchors.top: parent.top
//            anchors.left: parent.left
//            anchors.leftMargin: -121
//            anchors.topMargin: -60
//            source: "qrc:///images/car/bg_car.png"
//        }

        Item {
            id: car
            height: 270
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.leftMargin: 50
            anchors.topMargin: 40

            Image {
                id: body
                source: "qrc:///images/car/body_newred.png"
            }
            Image {
                id: trunk_open
                visible: trunk_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 463
                anchors.topMargin: -53
                source: "qrc:///images/car/trunk_open_newred.png"
            }
            MouseArea {
                id: trunk_mouse_area
                anchors.fill: trunk_open
                onClicked: {
                    if(trunk_open.visible){
                        trunk_open.visible = false
                        trunk_closed.visible = true
                    }
                    else if(trunk_closed.visible){
                        trunk_closed.visible = false
                        trunk_open.visible = true
                    }
                }
            }
            Image {
                id: trunk_closed
                visible: !trunk_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 458
                anchors.topMargin: 12
                source: "qrc:///images/car/trunk_closed_newred.png"
            }
            Image {
                id: frunk_open
                visible: frunk_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 20
                anchors.topMargin: -50
                source: "qrc:///images/car/frunk_open_newred.png"
            }
            MouseArea {
                id: frunk_mouse_area
                anchors.fill: frunk_open
                onClicked: {
                    if(frunk_is_open)
                        frunk_is_open = false
                    else
                        frunk_is_open = true
                }
            }
            Image {
                id: frunk_closed
                visible: !frunk_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 3
                anchors.topMargin: 40
                source: "qrc:///images/car/frunk_closed_newred.png"
            }
            Image {
                id: sunroof_closed
                visible: sunroof_state === "closed"
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 265
                anchors.topMargin: 0
                source: "qrc:///images/car/sunroof_closed.png"
            }
            Image {
                id: sunroof_open
                visible: sunroof_state === "open"
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 265
                anchors.topMargin: 0
                source: "qrc:///images/car/sunroof_open.png"
            }
            MouseArea {
                id: sunroof_mouse_area
                anchors.fill: sunroof_open
                onClicked: {
                    TeslaAPI.roof_clicked()
                }
            }
            Image {
                id: sunroof_vent
                visible: sunroof_state === "vent"
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 265
                anchors.topMargin: 0
                source: "qrc:///images/car/sunroof_vent.png"
            }
            Image {
                id: driver_front_door_open
                visible: driver_front_door_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 155
                anchors.topMargin: 126
                source: "qrc:///images/car/left_front_open_newred.png"
            }
            MouseArea {
                id: driver_front_door_mouse_area
                anchors.fill: driver_front_door_open
                onClicked: passanger_front_door_clicked/*{
                    if(driver_front_door_is_open)
                        driver_front_door_is_open = false
                    else
                        driver_front_door_is_open = true
                }*/
            }
            Image {
                id: driver_front_door_closed
                visible: !driver_front_door_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 181
                anchors.topMargin: 70
                source: "qrc:///images/car/left_front_closed_newred.png"
            }
            Image {
                id: driver_back_door_open
                visible: driver_back_door_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 295
                anchors.topMargin: 90
                source: "qrc:///images/car/left_rear_open_newred.png"
            }
            MouseArea {
                id: driver_back_door_mouse_area
                anchors.fill: driver_back_door_open
                onClicked: {
                    if(driver_back_door_is_open)
                        driver_back_door_is_open = false
                    else
                        driver_back_door_is_open = true
                }
            }
            Image {
                id: driver_back_door_closed
                visible: !driver_back_door_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 331
                anchors.topMargin: 69
                source: "qrc:///images/car/left_rear_closed_newred.png"
            }
            Image {
                id: charge_cable_connected
                visible: charge_cable_is_connected
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 530
                anchors.topMargin: 140
                source: "qrc:///images/car/charge_cable_long.png"
            }
            Image {
                id: charge_cable_connected_light
                visible: charge_cable_is_connected
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 568
                anchors.topMargin: 135
                source: "qrc:///images/car/charge_port_on.png"
            }
            Image {
                id: charge_port_open
                visible: charge_port_is_open
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 575
                anchors.topMargin: 135
                source: "qrc:///images/car/charge_port_open.png"
            }
            Image {
                id: climate_car_cold
                visible: climate_car_is_cold
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 125
                anchors.topMargin: -20
                scale: 0.35
                source: "qrc:///images/car/climate_car_cold.png"
            }
            Image {
                id: climate_car_hot
                visible: climate_car_is_hot
                anchors.top: car.top
                anchors.left: car.left
                anchors.leftMargin: 125
                anchors.topMargin: -20
                scale: 0.35
                source: "qrc:///images/car/climate_car_hot.png"
            }
        }
    }
    Timer {
        interval: 35000
        running: true
        repeat: true
        onTriggered: {
            TeslaAPI.request('POST', 'wake', null, function(result) {
//                TeslaAPI.request('GET', 'charge', null, function(charge_state) {
//                    //print(JSON.stringify(charge_state))
//                    chargingState = charge_state.charging_state
//                    batteryLevel = charge_state.battery_level

//                    charge_port_is_open = (charge_state.charge_port_door_open)
//                    charge_cable_is_connected = (charge_state.charging_state !== "Disconnected")
//                })
//                TeslaAPI.request('GET', 'vehicle_state', null, function(vehicle_state) {
//                    print(JSON.stringify(vehicle_state))
//                    driver_front_door_is_open = (vehicle_state.df === 1)
//                    driver_back_door_is_open = (vehicle_state.dr === 1)
//                    passanger_front_door_is_open = (vehicle_state.pf === 1)
//                    passanger_back_door_is_open = (vehicle_state.pr === 1)
//                    frunk_is_open = (vehicle_state.ft === 1)
//                    trunk_is_open = (vehicle_state.rt > 0)
//                    if(vehicle_state.sun_roof_percent_open > 0 && vehicle_state.sun_roof_percent_open <= 5)
//                        sunroof_state = "vent"
//                    else if (vehicle_state.sun_roof_percent_open > 0)
//                        sunroof_state = "open"
//                    else
//                        sunroof_state = "closed"
//                })
                print(JSON.stringify(result))
                TeslaAPI.request('GET', 'vehicle', null, function(charge_state) {
                    print(JSON.stringify(charge_state))
                })
            })
        }
    }

    Component.onCompleted: {
        driver_front_door_mouse_area.clicked.connect(TeslaAPI.driver_front_door_clicked)
    }
}
