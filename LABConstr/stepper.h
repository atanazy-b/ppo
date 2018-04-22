#ifndef STEPPER_H
#define STEPPER_H
enum LedState {LEFT, RIGHT, STOP};

#include "ledinv.h"

//
// KLASA BAZOWA || KLASA POCHODNA
// 

class Stepper {
    	unsigned char ucLedCtr, ucInversion;
    	void Step (enum LedState);
    public:
	Stepper ();
    	LedInv MyLedInv;
    	Led MyLed;
	//LedInv MyLedTab[5];
    	void SetMode (unsigned char);
    	void StepLeft (void);
    	void StepRight (void);  
};

#endif
