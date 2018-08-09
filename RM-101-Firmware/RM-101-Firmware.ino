#include "DigitalOutput.h"
#include "DigitalInput.h"
#include "A4982.h"
#include "PivotingStepperActuator.h"
#include "IO.h"

DigitalOutput x_step	(IO::PORT_F, 0);
DigitalOutput x_dir		(IO::PORT_F, 1);
DigitalOutput x_ms1		(IO::PORT_E, 3);
DigitalOutput x_ms2		(IO::PORT_H, 3);
DigitalOutput x_enable	(IO::PORT_D, 7);
DigitalOutput x_cs		(IO::PORT_B, 0);
A4982 x_motor(x_step, x_dir, x_ms1, x_ms2, x_enable, x_cs);
PivotingStepperActuator lift(x_motor);

DigitalOutput y_step	(IO::PORT_F, 6);
DigitalOutput y_dir		(IO::PORT_F, 7);
DigitalOutput y_ms1		(IO::PORT_F, 5);
DigitalOutput y_ms2		(IO::PORT_F, 4);
DigitalOutput y_enable	(IO::PORT_F, 2);
DigitalOutput y_cs		(IO::PORT_L, 0);
A4982 y_motor(y_step, y_dir, y_ms1, y_ms2, y_enable, y_cs);
PivotingStepperActuator rotate(y_motor);

DigitalOutput z_step	(IO::PORT_L, 6);
DigitalOutput z_dir		(IO::PORT_L, 1);
DigitalOutput z_ms1		(IO::PORT_A, 0);
DigitalOutput z_ms2		(IO::PORT_G, 2);
DigitalOutput z_enable	(IO::PORT_K, 0);
DigitalOutput z_cs		(IO::PORT_G, 1);
A4982 z_motor(z_step, z_dir, z_ms1, z_ms2, z_enable, z_cs);
PivotingStepperActuator elbow(z_motor);

void setup()
{
	x_motor.set_microstep(A4982::SixteenthStep);
	y_motor.set_microstep(A4982::SixteenthStep);
	z_motor.set_microstep(A4982::SixteenthStep);
	lift.set_steps_per_degree(375);
	rotate.set_steps_per_degree(375);
	elbow.set_steps_per_degree(375);
}

void loop()
{
	lift.update();
	rotate.update();
	elbow.update();
}