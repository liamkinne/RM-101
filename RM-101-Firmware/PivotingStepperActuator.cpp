#include "PivotingStepperActuator.h"

PivotingStepperActuator::PivotingStepperActuator(A4982 motor): motor(motor)
{

}


void PivotingStepperActuator::set_steps_per_degree(double steps)
{
	steps_per_degree = steps;
}

void PivotingStepperActuator::set_angle_degrees(double angle)
{
	steps_left = fabs(angle) * steps_per_degree;

	if (angle >= 0)
		motor.set_direction(A4982::Forward);
	else
		motor.set_direction(A4982::Reverse);

	finished = false;
	motor.set_enabled(true);
}

void PivotingStepperActuator::update_start()
{
	if (steps_left > 0) {
		motor.step_output.set(true);
	}
}

void PivotingStepperActuator::update_finish()
{
	if (steps_left > 0) {
		steps_left--;
		motor.step_output.set(false);
	}
	else {
		finished = true;
		motor.set_enabled(false);
	}
}

bool PivotingStepperActuator::is_finished()
{
	return finished;
}
