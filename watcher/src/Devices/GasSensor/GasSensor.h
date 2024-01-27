#ifndef GasSensor_h
#define GasSensor_h

class GasSensor {
    public:
        GasSensor();
        void init(int pin);
        int measureGasLevel();
    private:
        int pin;
};

extern GasSensor gasSensor;
#endif