#ifndef MotionDetector_h
#define MotionDetector_h

#include "Arduino.h"

class MotionDetector {
  public:
    MotionDetector();
    bool isMotionDetected();
    void init(int pin);
    int pin;
};

#endif
