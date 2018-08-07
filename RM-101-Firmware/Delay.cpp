#include "Delay.h"

void delay_microseconds(double microseconds)
{
	_delay_us(microseconds);
}

void delay_milliseconds(double milliseconds)
{
	_delay_ms(milliseconds);
}