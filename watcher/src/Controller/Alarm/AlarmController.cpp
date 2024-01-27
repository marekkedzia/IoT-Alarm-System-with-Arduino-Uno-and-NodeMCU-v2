#include "Arduino.h"
#include "AlarmController.h"

#include "Devices/Config.h"
#include "State.h"

void handleAlarm() {
    alarmHandler.handle();
      int ARMING_DELAY = 5000 * 6;
    if(wasDisarmedSinceLastAlarm && armingTime + ARMING_DELAY < millis()){
        eventEmitter.emit(ALARM_COMMAND_CODE);
        wasDisarmedSinceLastAlarm = false;
    }
}

AlarmController::AlarmController(MotionDetector& motionDetector) : _motionDetector(motionDetector)  {
};

void AlarmController::listen() {
    if(_motionDetector.isMotionDetected()){
        handleAlarm();
    }
    alarmHandler.countdown();
};
