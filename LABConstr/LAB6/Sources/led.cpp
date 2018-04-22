#include <avr/io.h>
#include "led.h"

//enum Step{LEFT,RIGHT};

Led::Led ()
{
	DDRC = (1<<DDC0) | (1<<DDC1) | (1<<DDC2) | (1<<DDC3);
	PORTC = (1<<PORTC0);
}	

void Led::On(unsigned char ucLedIndex)
{
	//PORTC = (LED0_bm | LED1_bm | LED2_bm | LED3_bm);
	
	switch(ucLedIndex){
		case 0:
			PORTC = (1<<PORTC0);
		break;
		case 1:
			PORTC = (1<<PORTC1); 
		break;
		case 2:
			PORTC = (1<<PORTC2);
		break;
		case 3:
			PORTC = (1<<PORTC3);
		break;
		default:
		break;		
	}
}	
