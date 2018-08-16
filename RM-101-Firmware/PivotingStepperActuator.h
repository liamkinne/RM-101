#ifndef PIVOTING_STEPPER_ACTUATOR_H
#define PIVOTING_STEPPER_ACTUATOR_H

#include <stdint.h>
#include <math.h>
#include "A4982.h"

class PivotingStepperActuator
{
public:
	PivotingStepperActuator(A4982 motor);

	void set_steps_per_degree(double steps);

	void set_angle_degrees(double angle);

	void update_start();
	void update_finish();

	bool is_finished();

private:
	A4982 motor;
	double steps_per_degree;

	double steps_left;
	bool finished;
};

#endif
