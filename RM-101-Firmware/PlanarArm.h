#ifndef PLANAR_ARM_H
#define PLANAR_ARM_H

#include "RotaryActuator.h"

class PlanarArm
{
public:
	PlanarArm(RotaryActuator* first_pivot, RotaryActuator* second_pivot);
	~PlanarArm();

	void set_position(double x, double y);

	void update();

private:
	RotaryActuator* first_pivot;
	RotaryActuator* second_pivot;
};

#endif