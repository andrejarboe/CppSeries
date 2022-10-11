#include <iostream>
#include "Log.h"

void Loops() {
	std::cout << "***************" << std::endl;
	std::cout << "***Loops.cpp***" << std::endl;
	std::cout << "***************" << std::endl;
	//loops
	// use for when you need to use a variable
	//	do the loop a countable number of times 
	//  or want to us the var in the loop
	// variable declaration; condition; call this before the next iteration of loop:
	for (int i = 0; i < 5; i++) {
		Log("Hello Loop!!!");
	}

	//use while when all you need is a condition.
	int i = 0;
	while (i < 5) {
		Log("While Loop");
		i++;
	}

	// do while
	// yuck 
	i = 0;
	do {
		Log("do while");
		i++;
	} while (i < 5);

	// control flow
	for (int n = 0; n < 5; n++) {
		if (n % 2 == 0) {
			continue;
		}
		Log("N Loop!!!");
		std::cout << n << std::endl;

	}

	for (int i = 0; i < 5; i++) {
		if (i > 2) {
			break;//stop
			//return 0; sends 0 and stops
			// return can be anywhere
			// this can produce dead code if you never run the line after it. 
		}
		Log("I Loop!!!");
		std::cout << i << std::endl;
	}
}