#ifndef STEPPER_H
#define STEPPER_H
enum LedState {LEFT, RIGHT, STOP};

#include "ledinv.h"

class Stepper {
    unsigned char ucLedCtr;
    void Step (enum LedState);
    public:
    Led MyLed;
    LedInv MyLedInv;
    void SetMode (unsigned char);
    void StepLeft (void);
    void StepRight (void);  
};

#endif
