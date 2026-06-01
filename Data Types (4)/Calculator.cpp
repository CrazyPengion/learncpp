//TASK: 
// The user is asked to enter 2 floating point numbers (use doubles). 
// The user is then asked to enter one of the following mathematical 
// symbols: +, -, *, or /. 
// The program computes the answer on the two numbers the user entered 
// and prints the results. If the user enters an invalid symbol, 
// the program should print nothing.

#include <iostream>

double input()
{
	double x;
	std::cout << "Enter a double value: ";
	std::cin >> x;
	return x;
}

double calculate(double x, double z, char o)
{
	if (o == '+')
		return x + z;

	else if (o == '-')
		return x - z;

	else if (o == '*')
		return x * z;

	else if (o == '/')
		return x / z;
}

/* Commented out due to multiple projects in this section

void main()
{
	double value1{ input() };	
	double value2{ input() };
	
	char operand;
	std::cout << "Enter +, -, *, or /: ";
	std::cin >> operand;

	if (operand == '+' or operand == '-' or operand == '*' or operand == '/')
	std::cout << value1 << " " << operand << " " << value2
		<< " is " << calculate(value1, value2, operand);
}

*/