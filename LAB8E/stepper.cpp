#include "stepper.h"
#include <avr/io.h>

Stepper::Stepper ()
{

	PORTC = 15;

}


void Stepper::Step(enum LedState eStep){
	
    	if(eStep == LEFT)
	{
		ucLedCtr--;
		ucLedCtr = ucLedCtr % 4;
		pMyLed->On(ucLedCtr);	
	}
	else if(eStep == RIGHT)
	{
		ucLedCtr++;
		ucLedCtr = ucLedCtr % 4;
		pMyLed->On(ucLedCtr);	
	}
	else {}
}

void Stepper::StepLeft (void){
	Step(LEFT);
}

void Stepper::StepRight (void){
	Step(RIGHT);
}

/*void Stepper::SetMode (unsigned char ucMode)
{
	if (ucMode)
	{
		pMyLed = &MyLedInv;
	}
	else
	{
		pMyLed = &MyLed;
	}
}*/







