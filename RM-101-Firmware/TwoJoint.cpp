#include "TwoJoint.h"

TwoJoint::TwoJoint(StepperMotor * motor_a, StepperMotor * motor_b, float length_a, float length_b):
	motor_a(motor_a),
	motor_b(motor_b),
	length_a(length_a),
	length_b(length_b)
{

}

void TwoJoint::set(float x, float y)
{
	double r = sqrt(x*x + y*y);
	double q2 = acos((length_a*length_a + length_b*length_b - r*r)/(2.0*length_a*length_b));
	q2 = 3.14 - q2;
	q2 = q2 * (180.0/3.14);

	motor_a->set_target_angle(-q2);
	while (motor_a->movement_finished() == false)
		motor_a->update();
	motor_b->set_target_angle(0);
	while (motor_b->movement_finished() == false)
		motor_b->update();
}

