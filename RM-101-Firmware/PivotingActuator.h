#ifndef PIVOTING_ACTUATOR_H
#define PIVOTING_ACTUATOR_H

#include <stdint.h>
#include <math.h>
#include "A4982.h"

class PivotingActuator
{
public:
	PivotingActuator(A4982 motor, double length);

	double get_length();

	void set_steps_per_degree(double steps);

	void set_angle_degrees(double angle);

	void update();

	bool is_finished();

private:
	A4982 motor;
	double length;
	double steps_per_degree;

	double current_angle;
	double target_angle
	double steps_left;
	bool finished;
};

#endif
