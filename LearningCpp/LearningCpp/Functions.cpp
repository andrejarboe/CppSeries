#include <iostream>

//Functions
/*
*	functions need to return a value unless function is void
*		but will not show err in release, only in debug
*	make a function when you are redoing a common task
*/

// static says that this function is only 
// declared for translation unit
static int Multiply(int a, int b) {
	return a * b;
}

void MultiplyAndLog(int a, int b) {
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

void fromFunctions() {
	std::cout << "****Functions.cpp****" << std::endl;

	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);
}
