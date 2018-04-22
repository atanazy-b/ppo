#include <avr/io.h>
#include "debug.h"
#define F_CPU 1000000
#include <util/delay.h>

Debugger::Debugger ()
{
	DDRB = 15;
}

void Debugger::Shine (void)
{
//	DDRB = (1<<DDB0);
	PORTB = 15;
} 

void Debugger::Check_tf (int Value)
{
	if (Value == 1)
	{
		Shine ();
	}
	else {}
}
