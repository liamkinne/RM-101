#include "PivotingActuator.h"

PivotingActuator::PivotingActuator(A4982 motor, double length):
	motor(motor),
	length(length)
{

}

double PivotingActuator::get_length() {
	return length;
}

void PivotingActuator::set_steps_per_degree(double steps)
{
	steps_per_degree = steps;
}

void PivotingActuator::set_angle_degrees(double angle)
{
	target_angle = angle
	steps_left = fabs(current_angle - angle) * steps_per_degree;

	
}

void PivotingActuator::update()
{
	if (angle >= 0)
		motor.set_direction(A4982::Forward);
	else
		motor.set_direction(A4982::Reverse);

	finished = false;
	motor.set_enabled(true);
}

bool PivotingActuator::is_finished()
{
	return finished;
}
