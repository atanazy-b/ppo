#define F_CPU 1000000
#include "led.h"
#include "stepper.h"
#include <util/delay.h>

/*void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}*/

Stepper MyStepper;
Led MyLed;

int main(void)
{
  
	MyLed.Init();
	while(1){
		_delay_ms(150);
		MyStepper.StepRight();
	}
}
