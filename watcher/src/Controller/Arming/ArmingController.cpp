#include "ArmingController.h"
#include "Handlers/ArmingHandler/ArmingHandler.h"


ArmingController::ArmingController(RFID& rfid) : rfid(rfid) {
};

void ArmingController::listen() {
  if(rfid.isCardDetected()) {
    armingHandler.handle();
  }
};
