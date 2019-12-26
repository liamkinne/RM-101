#include "RotaryActuator.h"

RotaryActuator::RotaryActuator(A4982 motor, double length, double steps_per_degree):
	motor(motor),
	length(length),
	steps_per_degree(steps_per_degree)
{

}

void RotaryActuator::set_angle(double angle)
{
	target_angle = angle;
	steps_left = fabs(current_angle - angle) * steps_per_degree;
}

void RotaryActuator::update()
{
	if ((target_angle - current_angle) >= 0)
		motor.set_direction(A4982::Forward);
	else
		motor.set_direction(A4982::Reverse);

	if (steps_left > 0)
	{
		motor.step();
		steps_left--;
	}

	finished = false;
	motor.set_enabled(true);
}

bool RotaryActuator::is_finished()
{
	return finished;
}
