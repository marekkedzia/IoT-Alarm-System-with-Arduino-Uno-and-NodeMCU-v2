#ifndef EventEmitter_h
#define EventEmitter_h

#include "Wire.h"

class EventEmitter {
    public:
        EventEmitter();
        void emit(int commandCode);
};

extern EventEmitter eventEmitter;
#endif