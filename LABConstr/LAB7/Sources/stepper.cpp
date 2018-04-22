#include "led.h"
#include "stepper.h"
#include <avr/io.h>

/*Stepper::Stepper (unsigned char ucStart)
{
    PORTC = (1<<ucStart);
}*/

Stepper::Stepper ()
{
    PORTC = (1<<PORTC2);
}

void Stepper::Step(enum LedState eStep){
	
    if(eStep == LEFT){
		ucLedCtr--;
		ucLedCtr = ucLedCtr % 4;
		MyLed.On(ucLedCtr);
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
		ucLedCtr = ucLedCtr % 4;
		MyLed.On(ucLedCtr);
	}else{
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
