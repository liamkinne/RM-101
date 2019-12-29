#include "Motors.h"
#include <util/delay.h>
#include "TwoJoint.h"

TwoJoint joint(&x_motor, &y_motor, 200, 145);

int main()
{
	x_driver.set_enabled(true);
	y_driver.set_enabled(true);
	x_driver.set_microstep(StepperDriver::SixteenthStep);
	y_driver.set_microstep(StepperDriver::SixteenthStep);

	joint.set(200,0);

	_delay_ms(100);

	//joint.set(100,0);

	x_driver.set_enabled(false);
	y_driver.set_enabled(false);
}
