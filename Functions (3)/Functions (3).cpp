#include "Word.h"
#include "Add.h"
#include <iostream>

int getInteger();

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << SOLUTION << ":" << x << " + " << y << " is " << x + y << '\n';
	return 0;
}