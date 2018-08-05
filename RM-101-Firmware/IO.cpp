#include "IO.h"

using namespace IO;

const GeneralIOPort IO::PORT_A = {&PINA,&DDRA,&PORTA};
const GeneralIOPort IO::PORT_B = {&PINB,&DDRB,&PORTB};
const GeneralIOPort IO::PORT_C = {&PINC,&DDRC,&PORTC};
const GeneralIOPort IO::PORT_D = {&PIND,&DDRD,&PORTD};
const GeneralIOPort IO::PORT_E = {&PINE,&DDRE,&PORTE};
const GeneralIOPort IO::PORT_F = {&PINF,&DDRF,&PORTF};
const GeneralIOPort IO::PORT_G = {&PING,&DDRG,&PORTG};
const GeneralIOPort IO::PORT_H = {&PINH,&DDRH,&PORTH};
const GeneralIOPort IO::PORT_J = {&PINJ,&DDRJ,&PORTJ};
const GeneralIOPort IO::PORT_K = {&PINK,&DDRK,&PORTK};
const GeneralIOPort IO::PORT_L = {&PINL,&DDRL,&PORTL};