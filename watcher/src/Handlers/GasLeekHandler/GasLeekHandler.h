#ifndef GasLeekHandler_h
#define GasLeekHandler_h

#include "Handlers/Handler.h"
#include "Devices/Buzzer/Buzzer.h"
#include "Devices/Diod/Diod.h"
#include "Devices/Config.h"
#include "State.h"

class GasLeekHandler: public Handler {
    public:
        GasLeekHandler(Buzzer& buzzer, Diod& alarmDiod, Diod& disarmingDiod);
        void handle() override;
    private:
        Buzzer& _buzzer;
        Diod& _alarmDiod;
        Diod& _disarmingDiod;
};

extern GasLeekHandler gasLeekHandler;
#endif