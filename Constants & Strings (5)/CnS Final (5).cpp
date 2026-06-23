/* 
Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/

#include <iostream>
#include <string>
#include <string_view>

std::string getName(int number)
{
	std::string name{};
	std::cout << "Enter the name of person #" << number << ": ";
	std::getline(std::cin >> std::ws, name);
	std::cout << "\n";
	return std::string{ name };
}

std::uint16_t getAge(std::string_view name)
{
	uint16_t age{};
	std::cout << "Enter the age of " << name << ": ";
	std::cin >> age;
	std::cout << "\n";
	return age;
}

int main()
{
	std::string_view name1{ getName(1) };
	std::uint16_t age1{ getAge(name1) };
	std::string_view name2{ getName(2) };
	std::uint16_t age2{ getAge(name2) };

	if (age1 > age2)
	{
		std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").";
	}
	else if (age2 > age1)
	{
		std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").";
	}
	else
	{
		std::cout << name1 << " and " << name2 << " are the sage age.";
	}
}