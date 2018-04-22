#define F_CPU 1000000
#include "led.h"
#include "stepper.h"
#include "keyboard.h"
#include <util/delay.h>

/*void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}*/

Keyboard MyKeyboard;
Stepper MyStepper;

int main(void)
{
  
	while(1){
        if ( MyKeyboard.eRead() == BUTTON_1 )
        {        
            MyStepper.StepRight();
            _delay_ms(100);
        }        
        else if ( MyKeyboard.eRead() == BUTTON_2 )
        {        
            MyStepper.StepLeft();
            _delay_ms(100);
        }        
        else if ( MyKeyboard.eRead() == RELEASED )
        {        
            _delay_ms(500);
        }
	}
}
