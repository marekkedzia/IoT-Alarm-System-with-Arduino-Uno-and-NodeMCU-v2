#include "EventEmitter.h"
#include <Arduino.h>

EventEmitter::EventEmitter() {
}

void EventEmitter::emit(int commandCode) {
    Serial.println(commandCode);
}

EventEmitter eventEmitter;
