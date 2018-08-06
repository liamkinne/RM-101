#include "DigitalInput.h"

DigitalInput::DigitalInput(IO::GeneralIOPort port, uint8_t pin):
	port(port),
	pin(pin),
	bitmask(1<<pin)
{
	initialize();
}

void DigitalInput::initialize()
{
	*port.mode_register &= ~bitmask;
}

void DigitalInput::set_pullup(bool setup)
{
	*port.output_register |= bitmask;
}

DigitalInput::State DigitalInput::get()
{
	return *port.input_register & bitmask;
}