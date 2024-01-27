#ifndef AlarmController_h
#define AlarmController_h

#include "Handlers/AlarmHandler/AlarmHandler.h"
#include "Controller/Controller.h"
#include "Devices/MotionDetector/MotionDetector.h"
#include "EventEmitter/EventEmitter.h"
#include "EventEmitter/Config.h"

class AlarmController : public Controller {
    public:
        AlarmController(MotionDetector& motionDetector);
        void listen() override;
    private:
    MotionDetector& _motionDetector;
};
#endif
