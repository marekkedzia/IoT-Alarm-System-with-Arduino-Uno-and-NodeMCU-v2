#ifndef Alarm_Handler_h
#define Alarm_Handler_h

#include "Handlers/Handler.h"
#include "Devices/Buzzer/Buzzer.h"
#include "Devices/Diod/Diod.h"
#include "Devices/Config.h"
#include "EventEmitter/EventEmitter.h"
#include "EventEmitter/Config.h"

class AlarmHandler : public Handler {
public:
    AlarmHandler(Buzzer& buzzer, Diod& alarmDiod);
    void handle() override; 
    void countdown();

private:
    Buzzer& _buzzer;
    Diod& _alarmDiod;
    };

extern AlarmHandler alarmHandler;
#endif
