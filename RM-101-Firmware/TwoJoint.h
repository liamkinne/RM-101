#ifndef TWO_JOINT_H
#define TWO_JOINT_H

#include <math.h>
#include <StepperMotor.h>

class TwoJoint
{
public:
	TwoJoint(StepperMotor * motor_a, StepperMotor * motor_b, float length_a, float length_b);
	
	void set(float x, float y);
private:
	StepperMotor * motor_a;
	StepperMotor * motor_b;
	float length_a;
	float length_b;
	
};

#endif