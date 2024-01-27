#include "GasSensor.h"

#include "Arduino.h"

GasSensor::GasSensor() {
}

void GasSensor::init(int pin) {
    this->pin = pin;
    pinMode(pin, INPUT);
}

int GasSensor::measureGasLevel() {
    return analogRead(pin);
}

GasSensor gasSensor;