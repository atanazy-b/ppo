#include <avr/io.h>
#include "led.h"

Led::Led ()
{

	iCalled++;

	DDRC = (1<<DDC0) | (1<<DDC1) | (1<<DDC2) | (1<<DDC3);

	//PORTC = (1<<iCalled);
}

int Led::iCalled = 0;
	
void Led::On(unsigned char ucLedIndex)
{

	switch(ucLedIndex)
    {
        	case 0:
			PORTC = (1<<PORTC0);
		break;
		case 1:
			PORTC = (1<<PORTC1); 
		break;
		case 2:
			//if (iCalled == 2) 
			{
			//	PORTC = 15;
			}
			//else
			{
				PORTC = (1<<PORTC2);
			}
		break;
		case 3:
			PORTC = (1<<PORTC3);
		break;
		default:
		break;
		
	}

}
