#ifndef RFID_h
#define RFID_h

#include <SPI.h>
#include <MFRC522.h>
#include "RFID.h"

class RFID {
    public:
        RFID(int chipSelectPin, int resetPowerDownPin);
        void init();
        bool isCardDetected();
    private:
    MFRC522 mfrc522;
    unsigned long lastReadTime;
};

#endif