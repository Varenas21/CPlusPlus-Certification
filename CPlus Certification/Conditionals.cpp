#include <iostream>
#include "Conditionals.h"


void Conditional() {
	auto x = 42;
	auto y = 7;

	if (x != y) { // 1 is true 0 is false
		cout << "Condition is true \n";
	}

	//Used for non complex statements
	auto s = x > y ? "yes" : "no"; // If the condition is true return first value (yes) otherwise return second value (no)
	cout << "S is " << s << std::endl; 

	// LOOPS
	// While will continue while the condition is true, if it is not then it will exit out
	int array[]{ 1,2,3,4,5 };
	int i{ 0 };

	while (i < 5)
	{
		cout << "-- WHILE --" << std::endl;
		if (i == 3) {
			i++;
			continue;
		}
		cout << "Element in index i:" << i << std::endl;
		cout << "Element in array i: " << array[i] << std::endl;
		++i;
	}

	do {
		cout << "-- DO WHILE --" << std::endl;
		cout << "Element in index i:" << i << std::endl;
		cout << "Element in array i: " << array[i] << std::endl;
	} while (i < 5);

	// FOR 
	cout << "-- FOR --" << std::endl;
	for (int i{ 0 }; i < 5; ++i)
	{
		cout << "Element in index i:" << i << std::endl;
		cout << "Element in array i: " << array[i] << std::endl;
	}
}