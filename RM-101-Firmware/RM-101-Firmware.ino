#include "Actuators.h"
#include <util/delay.h>

int main()
{
	x_motor.set_microstep(A4982::SixteenthStep);
	y_motor.set_microstep(A4982::SixteenthStep);
	z_motor.set_microstep(A4982::SixteenthStep);
	e0_motor.set_microstep(A4982::SixteenthStep);
	e1_motor.set_microstep(A4982::SixteenthStep);

	//rotate.set_angle(90);
	//lift.set_angle(90);
	grab.set_angle(45);
 
	while (true) {
		grab.update();
	}
}
