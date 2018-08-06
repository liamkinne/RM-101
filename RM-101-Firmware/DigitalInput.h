#ifndef DIGITAL_INPUT_H
#define DIGITAL_INPUT_H

#include "IO.h"

#undef HIGH
#undef LOW

class DigitalInput
{
public:
	enum State
	{
		High = true,
		Low = false
	};

	DigitalInput(IO::GeneralIOPort port, uint8_t pin);

	void initialize();

	void set_pullup(bool state);

	State get();

private:
	const IO::GeneralIOPort port;
	const uint8_t pin;
	const uint8_t bitmask;
};

#endif