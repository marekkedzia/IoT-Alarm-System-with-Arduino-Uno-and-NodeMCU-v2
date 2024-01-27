#include "Config.h"

Buzzer buzzer;

MotionDetector motionDetector1;

Diod alarmDiod;
Diod armingDiod;
Diod disarmingDiod;

RFID rfid(RFID_CHIP_SELECT_PIN, RFID_RESET_POWER_DOWN_PIN);

void initializeComponents() {
    Serial.begin(9600);

    buzzer.init(BUZZER_PIN);
    motionDetector1.init(MOTION_DETECTOR_PIN_1);
    alarmDiod.init(ALARM_DIOD_PIN);
    armingDiod.init(ARMING_DIOD_PIN);
    disarmingDiod.init(DISARMING_DIOD_PIN);
    disarmingDiod.turnOn();
    rfid.init();
}
