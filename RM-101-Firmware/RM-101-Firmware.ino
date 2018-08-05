#include "DigitalOutput.h"
#include "IO.h"

DigitalOutput out(IO::PORT_B, 7);

void setup()
{
}

void loop()
{
	out.toggle();
	delay(500);
}