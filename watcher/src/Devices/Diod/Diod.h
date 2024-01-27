#ifndef Diod_h
#define Diod_h

#include "Arduino.h"

class Diod {
  public:
    Diod();
    void turnOn();
    void turnOff();
    void blink();
    void init(int pin);
  private:
    int _pin;
};

#endif
