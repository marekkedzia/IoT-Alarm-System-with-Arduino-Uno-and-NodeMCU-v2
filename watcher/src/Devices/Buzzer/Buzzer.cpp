#include "Buzzer.h"

Buzzer::Buzzer() {
}

void Buzzer::init(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void Buzzer::_turnOn(int frequency) {
    tone(_pin, frequency);
}

void Buzzer::_turnOff() {
    noTone(_pin);
}

void Buzzer::beep() {
    _turnOn(3000);
    delay(100);
    _turnOn(3500);
    delay(100);
    _turnOff();
}

void Buzzer::moan() {
    _turnOn(1000);
    delay(100);
    _turnOn(1200);
    delay(100);
    _turnOn(1400);
   _turnOff();
}

void Buzzer::bark() {
    _turnOn(600);
    delay(100);
    _turnOff();
}

void Buzzer:: alarm(){
  _turnOn(4000);
}


