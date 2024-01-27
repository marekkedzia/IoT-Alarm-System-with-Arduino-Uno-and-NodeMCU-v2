#ifndef GasLeekController_h
#define GasLeekController_h

#include "Controller/Controller.h"
#include "Devices/GasSensor/GasSensor.h"
#include "Handlers/GasLeekHandler/GasLeekHandler.h"
#include "State.h"

class GasLeekController:Controller {
    public:
        GasLeekController(GasLeekHandler& gasLeekHandler, GasSensor& gasSensor);
        void listen() override;
    private:
        GasLeekHandler& _gasLeekHandler;
        GasSensor& _gasSensor;
};

#endif