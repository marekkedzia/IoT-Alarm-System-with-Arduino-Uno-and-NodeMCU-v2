#include "ApiClient.h"

ApiClient::ApiClient() {
}

bool ApiClient::init(String apiUrl, String deviceId, String wifiSsid, String wifiPassword) {
    this->apiUrl = apiUrl;
    this->deviceId = deviceId;
    
    connect(wifiSsid, wifiPassword);

    int healthCheck = get("/health");
    return healthCheck == 200;
}

int ApiClient::get(String path) {
    return call(path, HttpMethod::GET);
}


int ApiClient::post(String path, String body) {
    return call(path, HttpMethod::POST, body);
}

int ApiClient::call(String path, HttpMethod method, String eventType) {
        if (WiFi.status() == WL_CONNECTED) {
        WiFiClient client;
        HTTPClient http;
        int httpCode = 0;

        http.begin(client, apiUrl + path); 

        String body = "{\"deviceId\":\"" + deviceId + "\",\"eventType\":\"" + eventType + "\"}";

        switch (method)
        {
        case HttpMethod::GET:
            httpCode = http.GET();
            break;
        case HttpMethod::POST:
            http.addHeader("Content-Type", "application/json");
            httpCode = http.POST(body);
            break;
        default:
            break;
        }

        http.end();
        return httpCode;
    } else {
        return -1;
    }
}

void ApiClient::connect(String ssid, String password) {
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(100);
    }
}

ApiClient apiClient();
