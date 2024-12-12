#include <iostream>
#include "PointersAndReferences.h"

void Pointers() {
/*
* Variable type and name location in memory
* memory is allocated based on datatype and associated with a name
* Name is used as an index to map to a memory address
*
*/
//int x;
//x = 1;
//int y; // Represents a variable in another location in memory
//y = x; // It now contains the same value as X but is now in a different location under a different variable

// Pointer
//int* ip; Holds the address of another variable, poitner to an integer value
//ip = &x; Reference or address operator, assigns address of x to pointer (pointer points to the variable x)
//y = *ip; Dereferencing we access the value pointed to by the pointer. Equavilant of y = x;

	int x{ 7 };
	int* ip = &x;
	int& y = x; // Reference to an int

	cout << "The value of x is " << x << std::endl;
	cout << "The value of ip is " << *ip << std::endl;
	cout << "The value of y is " << y << std::endl;

	//int z{ 73 };
	//ip = &z;
	y = 42; // Changes the value of x

	//*ip = 42;

	cout << "The value of x is " << x << std::endl;
	cout << "The value of ip is " << *ip << std::endl;
	cout << "The value of y is " << y << std::endl;
}