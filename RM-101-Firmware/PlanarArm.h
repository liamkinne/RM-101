#ifndef PLANAR_ARM_H
#define PLANAR_ARM_H

#include "PivotingActuator.h"

class PlanarArm
{
public:
	PlanarArm(PivotingActuator* first_pivot, PivotingActuator* second_pivot);
	~PlanarArm();

	void set_position(double x, double y);

	void update();

private:
	PivotingActuator* first_pivot;
	PivotingActuator* second_pivot;
};

#endif