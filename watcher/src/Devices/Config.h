#ifndef Config_h
#define Config_h

#include "Arduino.h"
#include "Buzzer/Buzzer.h"
#include "MotionDetector/MotionDetector.h"
#include "Diod/Diod.h"
#include "RFID/RFID.h"
#include "GasSensor/GasSensor.h"

//BUZZER
const int BUZZER_PIN = 6;

//MOTION DETECTORS
const int MOTION_DETECTOR_PIN_1 = 2;

//DIODS
const int ALARM_DIOD_PIN = 7;
const int ARMING_DIOD_PIN = 5;
const int DISARMING_DIOD_PIN = 4;

//RFID
const int RFID_CHIP_SELECT_PIN = 10;
const int RFID_RESET_POWER_DOWN_PIN = 9;

//GAS SENSOR
const int GAS_SENSOR_PIN = A0;

extern Buzzer buzzer;
extern MotionDetector motionDetector1;
extern Diod alarmDiod;
extern Diod armingDiod;
extern Diod disarmingDiod;
extern RFID rfid;
extern GasSensor gasSensor;

void initializeComponents();

#endif
