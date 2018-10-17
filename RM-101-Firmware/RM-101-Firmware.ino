#include "Actuators.h"
#include <util/delay.h>

int main()
{
	x_motor.set_microstep(A4982::SixteenthStep);
	y_motor.set_microstep(A4982::SixteenthStep);
	z_motor.set_microstep(A4982::SixteenthStep);
	e0_motor.set_microstep(A4982::SixteenthStep);
	e1_motor.set_microstep(A4982::SixteenthStep);
	rotate.set_steps_per_degree(400);
	lift.set_steps_per_degree(360);
	elbow.set_steps_per_degree(360);
	grab.set_steps_per_degree(360);
	misc.set_steps_per_degree(360);
 
	while (true) {

		
		rotate.update_start();
		lift.update_start();
		elbow.update_start();
		grab.update_start();
		_delay_us(115);
		rotate.update_finish();
		lift.update_finish();
		elbow.update_finish();
		grab.update_finish();
		_delay_us(115);
	}
}
