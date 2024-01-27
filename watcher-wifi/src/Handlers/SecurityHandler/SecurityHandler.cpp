#include "SecurityHandler.h"


SecurityHandler::SecurityHandler(ApiClient& apiClient) : apiClient(apiClient) {
}

void SecurityHandler::init(String apiUrl, String deviceId, String wifiSsid, String wifiPassword) {
    isApiAvailable = apiClient.init(apiUrl, deviceId, wifiSsid, wifiPassword);
}

void SecurityHandler::handle() {
  int command = Serial.read();  
    
    if(command == -1) {
        return;
    }

    if(!isApiAvailable){
        return;
    } 

    switch (command) {
        case 49:
            apiClient.post("/event", "intruded");
            break;
        case 50:
            apiClient.post("/event", "alarm-armed");
            break;
        case 51:
            apiClient.post("/event", "alarm-disarmed");
            break;
        default:
            break;
    }
}
