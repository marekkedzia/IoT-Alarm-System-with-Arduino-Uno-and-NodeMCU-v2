#include "GasLeekHandler.h"

GasLeekHandler::GasLeekHandler(Buzzer& buzzer, Diod& alarmDiod, Diod& disarmingDiod) : _buzzer(buzzer), _alarmDiod(alarmDiod), _disarmingDiod(disarmingDiod) {
}

void GasLeekHandler::handle() {
    if(gasLevelValue > acceptedGasLevelValue) {
        _buzzer.alarm();
        _alarmDiod.turnOn();
        _disarmingDiod.turnOff();
        wasLeek = true;
    } else  if (wasLeek){
        _buzzer.beep();
        _alarmDiod.turnOff();
        _disarmingDiod.turnOn();
        wasLeek = false;
    }
}

GasLeekHandler gasLeekHandler(buzzer, alarmDiod, disarmingDiod);