#include "GasLeekController.h"

GasLeekController::GasLeekController(GasLeekHandler& gasLeekHandler, GasSensor& gasSensor) : _gasLeekHandler(gasLeekHandler), _gasSensor(gasSensor) {
}

void GasLeekController::listen() {
    gasLevelValue = _gasSensor.measureGasLevel();
    _gasLeekHandler.handle();
}