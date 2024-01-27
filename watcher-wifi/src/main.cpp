#include <Arduino.h>
#include <ApiClient/ApiClient.h>
#include <Handlers/SecurityHandler/SecurityHandler.h>

String API_URL = "";

String WIFI_SSID = "";
String WIFI_PASSWORD = "";

String DEVICE_ID = "";

ApiClient apiClient;
SecurityHandler securityHandler(apiClient);

void setup() {
    Serial.begin(9600);
    securityHandler.init(API_URL, DEVICE_ID, WIFI_SSID, WIFI_PASSWORD);
}

void loop() {
    securityHandler.handle();
}
