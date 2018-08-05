#include "DigitalOutput.h"

DigitalOutput::DigitalOutput(IO::GeneralIOPort port, uint8_t pin):
	port(port),
	pin(pin),
	bitmask(1<<pin)
{

	initialize();
}

void DigitalOutput::initialize()
{
	*port.mode_register |= bitmask;
}

void DigitalOutput::set(State state)
{
	if (state == HIGH)
		*port.output_register |= bitmask;
	else
		*port.output_register &= ~bitmask;
}

void DigitalOutput::toggle() {
	*port.input_register |= bitmask;
}