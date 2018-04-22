#include "stepper.h"
#include "led.h"

extern Led MyLed;

void Stepper::Step(enum LedState eStep){

    //extern Led MyLed;
	
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
