#define F_CPU 1000000
#include "stepper.h"
#include "keyboard.h"
#include <util/delay.h>


Keyboard MyKeyboard;
//Stepper MyStepper;

unsigned char ucInversion;

int main(void)
{

	
	if ( MyKeyboard.eRead() == BUTTON_4 )
	{
		ucInversion = 1;
	}
	else
	{
		ucInversion = 0;
	}
  
	Stepper MyStepper;

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
