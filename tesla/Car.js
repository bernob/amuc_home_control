function request(verb, endpoint, obj, cb) {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function() {
        if(xhr.readyState === XMLHttpRequest.DONE) {
            if(cb) {
                var res = JSON.parse(xhr.responseText.toString())
                cb(res);
            }
        }
    }
    xhr.open(verb, 'http://192.168.245.128:8888/' + endpoint);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.setRequestHeader('Accept', 'application/json');
    var data = obj?JSON.stringify(obj):'';
    xhr.send(data);
}
function driver_front_door_clicked() {
            if(driver_front_door_is_open)
                driver_front_door_is_open = false
            else
                driver_front_door_is_open = true
}

function roof_clicked() {
    if(sunroof_state === "closed") {
        Tesla.request('POST', 'roof/vent', null, function (response) { status_text.text = response.result ? "venting in progress" : "venting roof failed" })
        status_text.text = "venting roof..."
    }
    else if(sunroof_state === "vent") {
        Tesla.request('POST', 'roof/open', null, function (response) { status_text.text = response.result ? "open in progress" : "open roof failed" })
        status_text.text = "opening roof..."
    }
    else {
        Tesla.request('POST', 'roof/close', null, function (response) { status_text.text = response.result ? "closing in progress" : "closing roof failed" })
        status_text.text = "closing roof..."
    }
}
