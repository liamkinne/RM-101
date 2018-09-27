#ifndef ACTUATORS_H
#define ACTUATORS_H

#include <DigitalOutput.h>
#include <DigitalInput.h>
#include <A4982.h>
#include "PivotingStepperActuator.h"

DigitalOutput x_step	(GPIO::F, 0);
DigitalOutput x_dir		(GPIO::F, 1);
DigitalOutput x_ms1		(GPIO::E, 3);
DigitalOutput x_ms2		(GPIO::H, 3);
DigitalOutput x_enable	(GPIO::D, 7);
DigitalOutput x_cs		(GPIO::B, 0);
A4982 x_motor(&x_step, &x_dir, &x_ms1, &x_ms2, &x_enable, &x_cs);

DigitalOutput y_step	(GPIO::F, 6);
DigitalOutput y_dir		(GPIO::F, 7);
DigitalOutput y_ms1		(GPIO::F, 5);
DigitalOutput y_ms2		(GPIO::F, 4);
DigitalOutput y_enable	(GPIO::F, 2);
DigitalOutput y_cs		(GPIO::L, 0);
A4982 y_motor(&y_step, &y_dir, &y_ms1, &y_ms2, &y_enable, &y_cs);

DigitalOutput z_step	(GPIO::L, 3);
DigitalOutput z_dir		(GPIO::L, 1);
DigitalOutput z_ms1		(GPIO::A, 0);
DigitalOutput z_ms2		(GPIO::G, 2);
DigitalOutput z_enable	(GPIO::K, 0);
DigitalOutput z_cs		(GPIO::G, 1);
A4982 z_motor(&z_step, &z_dir, &z_ms1, &z_ms2, &z_enable, &z_cs);

DigitalOutput e0_step	(GPIO::A, 4);
DigitalOutput e0_dir	(GPIO::A, 6);
DigitalOutput e0_ms1	(GPIO::K, 1);
DigitalOutput e0_ms2	(GPIO::K, 2);
DigitalOutput e0_enable	(GPIO::A, 2);
DigitalOutput e0_cs		(GPIO::G, 1);
A4982 e0_motor(&e0_step, &e0_dir, &e0_ms1, &e0_ms2, &e0_enable, &e0_cs);

DigitalOutput e1_step	(GPIO::C, 1);
DigitalOutput e1_dir	(GPIO::C, 3);
DigitalOutput e1_ms1	(GPIO::F, 3);
DigitalOutput e1_ms2	(GPIO::G, 5);
DigitalOutput e1_enable	(GPIO::C, 7);
DigitalOutput e1_cs		(GPIO::L, 5);
A4982 e1_motor(&e1_step, &e1_dir, &e1_ms1, &e1_ms2, &e1_enable, &e1_cs);

PivotingStepperActuator rotate(x_motor);
PivotingStepperActuator lift(y_motor);
PivotingStepperActuator elbow(z_motor);
PivotingStepperActuator grab(e0_motor);
PivotingStepperActuator misc(e1_motor);

#endif