#include "AlarmHandler.h"
#include "State.h"

AlarmHandler::AlarmHandler(Buzzer& buzzer, Diod& alarmDiod) : _buzzer(buzzer), _alarmDiod(alarmDiod) {
}

void AlarmHandler::handle() {
         _alarmDiod.turnOn();
        _buzzer.alarm();
}

void AlarmHandler::countdown() {
      int ARMING_DELAY = 5000 * 6;
      if(armingTime + ARMING_DELAY > millis()){
        buzzer.bark();
        alarmDiod.blink();
        delay(900);
    }
}

AlarmHandler alarmHandler(buzzer, alarmDiod);