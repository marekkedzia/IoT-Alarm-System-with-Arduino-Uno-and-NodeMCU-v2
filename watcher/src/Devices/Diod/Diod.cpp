#include "Arduino.h"
#include "Diod.h"

Diod::Diod() {
}

void Diod::init(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void Diod::turnOn() {
    digitalWrite(_pin, HIGH);
}

void Diod::turnOff() {
    digitalWrite(_pin, LOW);
}

void Diod::blink() {
    turnOn();
    delay(100);
    turnOff();
}