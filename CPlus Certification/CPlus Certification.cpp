#include <iostream>
#include "Conditionals.h"
#include "PointersAndReferences.h"

using std::cout;

int main()
{
	//Pointers
	Pointers();
	// Conditionals
	Conditional();


	// Std == Standard, double colon scope operator
	std::cout << "Hello World!\n"; // Safer than than printf
	const char* str{ "Hello World" };
	//std::printf("The str is {}\n", str); // Faster than cout

	// Identifiers are case sensitive and they are 73 | 11 keywords and alternative tokens
	//const if it has an const it cannot change (constant variable value) 
    //auto allows compiler to determine the type of variable EX: auto i {47};

	int i{}; // Initial value of 0
	cout << i << std::endl;
	i = 47;
	cout << i << std::endl;

	return 0;
}

