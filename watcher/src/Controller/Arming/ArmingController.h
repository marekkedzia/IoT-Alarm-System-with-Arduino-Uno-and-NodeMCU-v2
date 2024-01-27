#ifndef ArmingController_h
#define ArmingController_h

#include "Controller/Controller.h"
#include "Devices/RFID/RFID.h"

class ArmingController : public Controller {
    public:
        ArmingController(RFID& rfid);
        void listen() override;
        bool isArmed();
    private:
        RFID& rfid;
};

#endif