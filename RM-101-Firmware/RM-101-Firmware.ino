#include "Actuators.h"
#include <util/delay.h>
#include <vector>

typedef struct {
	float rotate;
	float lift;
	float elbow;
	float grab;
} position;

std::vector<position> positions;

bool starting_movement = true;

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

	// Diamond
	/*
	positions.push_back({15, 15, 0, 0});
	positions.push_back({-15, 15, 0, 0});
	positions.push_back({-15, -15, 0, 0});
	positions.push_back({15, -15, 0, 0});
	*/

	// Pick Up Bottle
	positions.push_back({0, 55, 8, 0});
	positions.push_back({0, 0, 0, -70}); // close grabber
	positions.push_back({0, -55, -8, 0});
	positions.push_back({0, 0, 0, 70}); // open grabber

	while (true) {
		if (starting_movement) {
			rotate.set_angle_degrees(positions.front().rotate);
			lift.set_angle_degrees(positions.front().lift);
			elbow.set_angle_degrees(positions.front().elbow);
			grab.set_angle_degrees(positions.front().grab);
			starting_movement = false;
		}

		if (movement_complete()) {
			if (positions.size() > 1) {
				positions.erase(positions.begin());
				starting_movement = true;
			}
		}
		
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

bool movement_complete()
{
	return (rotate.is_finished() and lift.is_finished() and elbow.is_finished() and grab.is_finished());
}
