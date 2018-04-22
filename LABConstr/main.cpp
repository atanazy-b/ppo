#define F_CPU 1000000
#include "stepper.h"
#include "keyboard.h"
#include <util/delay.h>
#include "debug.h"

Keyboard MyKeyboard;

int main(void)
{	
	
  
	Stepper MyStepper;

	if ( MyKeyboard.eRead() == BUTTON_4 )
	{
		MyStepper.SetMode (1);
	}
	else
	{
		MyStepper.SetMode (0);
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
