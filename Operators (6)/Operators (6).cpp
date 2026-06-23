/*
Write a program that asks the user to input an integer, and tells the user whether the number 
is even or odd. Write a constexpr function called isEven() that returns true if an integer 
passed to it is even, and false otherwise. Use the remainder operator to test whether the 
integer parameter is even. Make sure isEven() works with both positive and negative numbers.

Your program should match the following output:

Enter an integer: 5
5 is odd


#include <iostream>

// function forward declarations
int getNumber();
constexpr bool isEven(int x);
void printMessage(int number, bool isNumberEven);

int main()
{
	int number{ getNumber() };
	bool isNumberEven{ isEven(number) };
	printMessage(number, isNumberEven);
}

int getNumber()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}

constexpr bool isEven(int x)
{
	if (x % 2 != 0)
	{
		return false;
	}
	return true;
}

void printMessage(int number, bool isNumberEven)
{
	if (isNumberEven)
	{
		std::cout << "\n" << number << " is even";
	}
	if (!isNumberEven)
	{
		std::cout << "\n" << number << " is odd";
	}
}*/