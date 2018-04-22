#include "stepper.h"
#include <avr/io.h>

extern unsigned char ucInversion;


void Stepper::Step(enum LedState eStep){
	
    	if(eStep == LEFT)
	{
		ucLedCtr--;
		ucLedCtr = ucLedCtr % 4;
		if (ucInversion == 0)
		{
			MyLed.On(ucLedCtr);
		}
		else
		{
			MyLedInv.On(ucLedCtr);
		}	
	}
	else if(eStep == RIGHT)
	{
		ucLedCtr++;
		ucLedCtr = ucLedCtr % 4;
		if (ucInversion == 0)
		{
			MyLed.On(ucLedCtr);
		}
		else
		{
			MyLedInv.On(ucLedCtr);
		}
	}
	else {}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
