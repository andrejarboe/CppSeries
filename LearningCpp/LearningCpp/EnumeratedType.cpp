#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void EnumeratedType(){
	LOG("************************");
	LOG("***EnumeratedType.cpp***");
	LOG("************************");

	//a set of values
	//it is a way to give a name to a value

	//default is 32 bits
	// make unsigned char for 8 bits
	// must be an in so can not be float
	enum Example: unsigned char{
		//these are just ints
		//default it just counts form 0 
		// A = 0 B = 1 C = 2
		// A = 5 B = 6 C = 7
		A = 5, B, C
	};

	Example value = B;

	if ( value == 1 ) {
		// Do something here
	}

}