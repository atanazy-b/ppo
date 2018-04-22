#include <avr/io.h>
#include "ledinv.h"

LedInv::LedInv ()
{
//	DDRC = (1<<DDC0) | (1<<DDC1) | (1<<DDC2) | (1<<DDC3);
	
//	PORTC = (1<<PORTC1);
//	iCalled--;	
		
}	
void LedInv::On(unsigned char ucLedIndex)
{
	PORTC = 15;

	switch(ucLedIndex)
	{
		case 0:
			PORTC &= ~(1<<PORTC0);
		break;
		case 1:
			PORTC &= ~(1<<PORTC1); 
		break;
		case 2:
			PORTC &= ~(1<<PORTC2);
		break;
		case 3:
			PORTC &= ~(1<<PORTC3);
		break;
		default:
		break;
        
	}

}
