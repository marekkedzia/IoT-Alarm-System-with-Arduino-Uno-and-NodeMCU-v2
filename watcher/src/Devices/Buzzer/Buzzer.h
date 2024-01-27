#ifndef Buzzer_h
#define Buzzer_h

#include "Arduino.h"

class Buzzer {
  public:
    Buzzer();
   
    void init(int pin);
    void beep();
    void moan();
    void alarm();
    void bark();
  private:
    int _pin;
    void _turnOn(int frequency);
    void _turnOff();
};

#endif
