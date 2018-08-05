#ifndef IO_H
#define IO_H

#include <avr/pgmspace.h>
#include <avr/io.h>

namespace IO {
	typedef struct {
		volatile uint8_t* input_register;
		volatile uint8_t* mode_register;
		volatile uint8_t* output_register;
	} GeneralIOPort;

	extern const GeneralIOPort PORT_A;
	extern const GeneralIOPort PORT_B;
	extern const GeneralIOPort PORT_C;
	extern const GeneralIOPort PORT_D;
	extern const GeneralIOPort PORT_E;
	extern const GeneralIOPort PORT_F;
	extern const GeneralIOPort PORT_G;
	extern const GeneralIOPort PORT_H;
	extern const GeneralIOPort PORT_J;
	extern const GeneralIOPort PORT_K;
	extern const GeneralIOPort PORT_L;
}

#endif