#include "Arduino.h"
#include "MotionDetector.h"

MotionDetector::MotionDetector() {
}

void MotionDetector::init(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT);
}

bool MotionDetector::isMotionDetected() {
  return digitalRead(pin) == HIGH;
}