#ifndef STEPPER_H
#define STEPPER_H
enum LedState {LEFT, RIGHT, STOP};

#include "ledinv.h"

class Stepper {
    	unsigned char ucLedCtr, ucInversion;
    	void Step (enum LedState);
    public:
	Stepper ();
    	Led * pMyLed;
    	void SetLed (unsigned char);
    	void StepLeft (void);
    	void StepRight (void);  
};

#endif
