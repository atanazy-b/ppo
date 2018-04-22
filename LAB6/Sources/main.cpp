#define F_CPU 1000000
#include "led.h"
#include "stepper.h"
#include <util/delay.h>

/*void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}*/

Stepper MyStepper (3);

int main(void)
{
  
	while(1){
		_delay_ms(550);
		MyStepper.StepRight();
	}
}
