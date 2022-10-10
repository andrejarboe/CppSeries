#include <iostream>
#include "Log.h"


void Conditions() {
	std::cout << "********************" << std::endl;
	std::cout << "***Conditions.cpp***" << std::endl;
	std::cout << "********************" << std::endl;

	//Conditions
	int x = 5;
	// check if 2 ints are equal 
	bool comparisonReslt = x == 5;
	if (comparisonReslt == true) {
		Log("Hola World!!!!!!!!!!!!");
	}


	if (x == 5)
		Log("x = 5");

	int y = 0;
	//does not print because y is 0 which is false
	if (y)
		Log("y = 0");

}