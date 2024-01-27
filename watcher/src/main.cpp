#include "Handlers/AlarmHandler/AlarmHandler.h"
#include "Devices/Config.h"
#include "Controller/Arming/ArmingController.h"
#include "Controller/Alarm/AlarmController.h"
#include "Controller/GasLeek/GasLeekController.h"
#include "State.h"


bool isArmed = false;
unsigned long armingTime = 0;
bool wasDisarmedSinceLastAlarm = true;
int gasLevelValue = 0;
bool wasLeek = false;
int acceptedGasLevelValue = 300;

ArmingController armingController(rfid);
AlarmController alarmController(motionDetector1);
GasLeekController gasLeekController(gasLeekHandler, gasSensor);

void setup() {
  initializeComponents();
}

void loop() {
  armingController.listen();
  gasLeekController.listen();
  if(isArmed){
    alarmController.listen();
  }
}



