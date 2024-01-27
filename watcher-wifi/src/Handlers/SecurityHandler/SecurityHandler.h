#ifndef SecurityHandler_h
#define SecurityHandler_h

#include <Handlers/Handler.h>
#include <ApiClient/ApiClient.h>

class SecurityHandler {
public:
    SecurityHandler(ApiClient& apiClient);
    void init(String apiUrl, String deviceId, String wifiSsid, String wifiPassword);
    void handle();
private:
    ApiClient& apiClient;
    bool isApiAvailable = false;
};

#endif
