#ifndef DIGITAL_OUTPUT_H
#define DIGITAL_OUTPUT_H

#include "IO.h"

#undef HIGH
#undef LOW

class DigitalOutput
{
public:
	enum State {
		High = true,
		Low = false
	};

	DigitalOutput(IO::GeneralIOPort port, uint8_t pin);

	void initialize();

	void set(State state);
	void set(bool state);
	void toggle();

private:
	const IO::GeneralIOPort port;
	const uint8_t pin;
	const uint8_t bitmask;
};

#endif