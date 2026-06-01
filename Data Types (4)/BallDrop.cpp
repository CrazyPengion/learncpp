//TASK: Write a short program to simulate a ball being dropped off of a tower. 
// To start, the user should be asked for the height of the tower in meters. 
// Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity 
// (the ball is not moving to start). Have the program output the height of the 
// ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not 
// go underneath the ground (height 0). 
// 
// Use a function to calculate the height of the ball after x seconds.
// The function can calculate how far the ball has fallen after x seconds 
// using the following formula : distance fallen = gravity_constant * x_seconds^2 / 2 
// 
// Note: Depending on the height of the tower, the ball may not reach the ground 
// in 5 seconds -- that’s okay. We’ll improve this program once we’ve covered loops.

#include <iostream>

// calculates new height after [time] seconds of falling
double Fall(double height, int time)
{
	return height - 9.81 * time * time / 2;
}

// sends the message of either the [height] after [time] seconds or if it's on the ground
void Message(double height, int time)
{
	// above ground
	if (height > 0)
		std::cout << "At " << time << " seconds, the ball is at height: "
		<< height << "\n";

	//on ground
	else if (height <= 0)
		std::cout << "At " << time << " seconds, the ball is on the ground.\n";
}

int main()
{
	// gets tower height
	double height;
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;

	// calculates and sends new height (Earth gravity)
	Message(Fall(height, 0), 0);
	Message(Fall(height, 1), 1);
	Message(Fall(height, 2), 2);
	Message(Fall(height, 3), 3);
	Message(Fall(height, 4), 4);
	Message(Fall(height, 5), 5);

	return 0;
}