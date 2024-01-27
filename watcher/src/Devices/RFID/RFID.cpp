#include "RFID.h"

RFID::RFID(int chipSelectPin, int resetPowerDownPin): mfrc522(chipSelectPin, resetPowerDownPin) {
};

void RFID::init() {
    SPI.begin();
    mfrc522.PCD_Init();
};

bool RFID::isCardDetected() {
  int CARD_READING_DELAY = 1000;
    if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial() && lastReadTime + CARD_READING_DELAY < millis()) {
    lastReadTime = millis();
    return true;
  } else {
    return false;
  }
};