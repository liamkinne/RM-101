#include "Delay.h"

inline void delay_microseconds(double microseconds)
{
	_delay_us(microseconds);
}

inline void delay_milliseconds(double milliseconds)
{
	_delay_ms(milliseconds);
}