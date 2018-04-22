#include <avr/io.h>
#include "keyboard.h"


#define BUTTON1_bm (1<<PIND0)
#define BUTTON2_bm (1<<PIND1)
#define BUTTON3_bm (1<<PIND2)
#define BUTTON4_bm (1<<PIND3)

Keyboard::Keyboard () 
{
    PORTD = (1<<PORTD0) | (1<<PORTD1) | (1<<PORTD2) | (1<<PORTD3);
	DDRD = (0<<DDD0) & (0<<DDD1) & (0<<DDD2) & (0<<DDD3);
}

enum KeyboardState Keyboard::eRead(void){
	if ( !(PIND & BUTTON1_bm) ){
		return BUTTON_1;
	}
	else if ( !(PIND & BUTTON2_bm) ){
		return BUTTON_2;
	}
	/*else if !(PIND & BUTTON3_bm){
		return BUTTON_3;
	}
	//else if !(PIND & BUTTON4_bm){
		return BUTTON_4;
	}*/
	else{
		return RELEASED;
	}
}
