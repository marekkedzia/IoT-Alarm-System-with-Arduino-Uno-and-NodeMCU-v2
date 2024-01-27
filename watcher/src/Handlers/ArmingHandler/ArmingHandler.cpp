#include "ArmingHandler.h"

ArmingHandler::ArmingHandler(Buzzer& buzzer, Diod& alarmDiod, Diod& armingDiod, Diod& disarmingDiod) : 
    _buzzer(buzzer), _alarmDiod(alarmDiod), _armingDiod(armingDiod), _disarmingDiod(disarmingDiod)
{
}

void ArmingHandler::handleArming() {
    eventEmitter.emit(ARMING_COMMAND_CODE);
    isArmed = true;
    armingTime = millis();
    _armingDiod.turnOn();
    _disarmingDiod.turnOff();
    _buzzer.beep();
    _alarmDiod.blink();
}

void ArmingHandler::handleDisarming() {
    eventEmitter.emit(DISARMING_COMMAND_CODE);
    isArmed = false;
    _armingDiod.turnOff();
    _disarmingDiod.turnOn();
    _buzzer.moan();
    _alarmDiod.turnOff();
    wasDisarmedSinceLastAlarm = true;
}

void ArmingHandler::handle() {
    if(isArmed){
        handleDisarming();  
    } else {
        handleArming();
    }
}

ArmingHandler armingHandler(buzzer, alarmDiod, armingDiod, disarmingDiod);