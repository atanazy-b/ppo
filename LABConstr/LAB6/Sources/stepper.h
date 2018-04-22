//#include "led.h"

enum LedState {LEFT, RIGHT, STOP};

class Stepper : public Led {
    unsigned char ucLedCtr;
    void Step (enum LedState);
    public:
    void StepLeft (void);
    void StepRight (void);
    Stepper ();
    Stepper (unsigned char);  
};
