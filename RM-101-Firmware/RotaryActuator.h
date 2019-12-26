#ifndef ROTARY_ACTUATOR_H
#define ROTARY_ACTUATOR_H

#include <stdint.h>
#include <math.h>
#include "A4982.h"

class RotaryActuator
{
public:
	RotaryActuator(A4982 motor, double length, double steps_per_degree);

	void set_angle(double angle);

	void update();

	bool is_finished();

private:
	A4982 motor;
	double length;
	double steps_per_degree;

	double current_angle;
	double target_angle;
	double steps_left;
	bool finished;
};

#endif
