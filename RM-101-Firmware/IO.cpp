#include "IO.h"

using namespace IO;

const GeneralIOPort IO::PORT_A = {&PINA,&DDRA,&PORTA};
const GeneralIOPort IO::PORT_B = {&PINB,&DDRB,&PORTB};