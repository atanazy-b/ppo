#define F_CPU 1000000
#include "stepper.h"
#include "keyboard.h"
#include <util/delay.h>
#include "debug.h"

Keyboard MyKeyboard;
Led MyLed;
LedInv MyLedInv;

int main(void)
{	
	
  
	Stepper MyStepper;

	if ( MyKeyboard.eRead() == BUTTON_4 )
	{
		MyStepper.pMyLed = &MyLedInv;
//		_delay_ms(5000);
	}
	else
	{
		// program wchodzi do tego bloku , ale wciaz funkcjonuje jak LedInv ??? 
		MyStepper.pMyLed = &MyLed;
	}

	while(1)
	{

		_delay_ms(500);

        	if ( MyKeyboard.eRead() == BUTTON_1 )
        	{        
            		MyStepper.StepRight();	
        	}        
        	else if ( MyKeyboard.eRead() == BUTTON_2 )
        	{        
            		MyStepper.StepLeft();
        	}
		else {}	
	}
}
