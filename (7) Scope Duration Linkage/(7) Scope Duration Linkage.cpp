/*
Write a program that asks the user to enter two integers,one named smaller, the other named larger.
If the user enters a smaller value for the second integer, use a block and a temporary variable
to swap the smaller and larger values. Then print the values of the smaller and larger variables.
Add comments to your code indicating where each variable dies. Note: When you print the values,
smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

The program output should match the following:

Enter an integer: 4
Enter a larger integer: 2
Swapping the values
The smaller value is 2
The larger value is 4
*/

// get 2 ints "smaller" "larger"
// if 2nd smaller: block + temp var to switch
// print

#include <iostream>

int main()
{
	int smaller{}; // smaller created
	int larger{}; // larger created

	std::cout << "Enter an integer: ";
	std::cin >> smaller;
	std::cout << "Enter a larger integer: ";
	std::cin >> larger;

	if (larger < smaller)
	{
		std::cout << "Swapping the values\n";
		int temp{ larger }; // temp created
		larger = smaller;
		smaller = temp;
	} // temp deleted

	std::cout << "The smaller value is " << smaller;
	std::cout << "\nThe larger value is " << larger;

	return 0;
} // smaller / larger deleted (theoretically on step before because of return)