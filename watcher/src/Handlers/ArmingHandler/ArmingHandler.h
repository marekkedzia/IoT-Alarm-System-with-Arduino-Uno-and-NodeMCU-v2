#ifndef Arming_Handler_h
#define Arming_Handler_h

#include "Handlers/Handler.h"
#include "Devices/Buzzer/Buzzer.h"
#include "Devices/Diod/Diod.h"
#include "Devices/Config.h"
#include "Controller/Alarm/AlarmController.h"
#include "State.h"
#include "EventEmitter/EventEmitter.h"
#include "EventEmitter/Config.h"

class ArmingHandler : public Handler {
public:
    ArmingHandler(Buzzer& buzzer, Diod& alarmDiod, Diod& armingDios, Diod& disarmingDiod);
    void handle() override;

private:
    Buzzer& _buzzer;
    Diod& _alarmDiod;
    Diod& _armingDiod;
    Diod& _disarmingDiod;
    void handleArming();
    void handleDisarming();
};

extern ArmingHandler armingHandler;
#endif