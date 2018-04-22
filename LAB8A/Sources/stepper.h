//#include "led.h"

enum LedState {LEFT, RIGHT, STOP};

class Stepper {
    unsigned char ucLedCtr;
    void Step (enum LedState);
    public:
    Led MyLed;
    void StepLeft (void);
    void StepRight (void);  
};
