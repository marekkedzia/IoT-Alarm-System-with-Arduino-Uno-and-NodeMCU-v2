#ifndef ApiClient_h
#define ApiClient_h

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h> 

enum class HttpMethod {
    GET,
    POST
};

class ApiClient {
public:
    ApiClient();
    bool init(String apiUrl, String deviceId, String wifiSsid, String wifiPassword);
    int get(String path);
    int post(String path, String body);

private:
    int call(String path,HttpMethod method, String body = ""); 
    void connect(String ssid, String password);
    String apiUrl;
    String deviceId;
};

#endif
