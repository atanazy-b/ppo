#include <avr/io.h>
#include <debug.h>


void Debugger::Shine (void)
{
	DDRB = (1<<DDRB0);
	PORTB = 1;
	_delay_ms(100);
	PORTB = 0;
} 

void Debugger::Check_tf (int Value)
{
	if (Value == 1)
	{
		Shine ();
	}
	else {}
}
