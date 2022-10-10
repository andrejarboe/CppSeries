/*
	#include <iostream>
	brings in cin and cout
	pick a platform
	pick debug or release to compile to 
*/

//preprocessor
#include <iostream>
#include "Log.h"
using namespace std;

//Have to tell compiler that Log function exist with a declaration
// it just trust us that the Log function exist
// The linker will go find it
void Log(const char* message); 
//void Multiply(int a, int b);

//static says that this function is only declared for translation unit
static int Multiply(int a, int b) {
	return a * b;
}

void MultiplyAndLog(int a, int b) {
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	/*
		header files get included into .cpp files
		.cpp files get compiled individually into object files
		the linker then glues all the .obj files into a .exe 
		compile with ctrl f7 of compile button
			no linking happens when you compile a single file
			just make an .opj file
			build will make .exe
	*/

	//std::cout.print("Hello World!!!").print(std::endl);
	std::cout << "Hello World!!!" << std::endl;
	Log("Hello from Log function");

	std::cout << Multiply(5, 8) << std::endl;

	/*
		1 byte is 8 bits
		4 bytes is 32bits
		int is signed so one of the 32 bits is the + or - sign
		31 bits left for the data
		2^31 = 2.1b and can say + or - 
		unsigned int is always + thus has 32bits
		2^32 = 4.29b
		char 2 bytes
		short 2
		int 4
		long usually 4
		long long usually 8
		all can be unsigned

		decimals have floats 4 bytes and doubles 8 bytes
		float var = 5.5f
		double var = 5.2

		bool
		either true or false
		0 = false
		any number ! = 0 is true

		yes 0 and 1 take up one bit
		but you can only address bytes
		but you can be smart and store 8 bools in 1 byte

		sizeof() tells you the size of the var
	*/

	int var = 8; // data size -2b - 2b
	std::cout << var << std::endl;

	var = 20;
	std::cout << var << std::endl;

	//Functions
	/*
	*	functions need to return a value unless function is void
	*		but will not show err in release, only in debug
	*	make a function when you are redoing a common task
	*/
	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);


	/*
	* header files
	* used to declare types of functions in a common place
	*	every files that uses the function needs to be told it exist
	*	you can does the with header files
	* 
	* use #pragma once to include .h in a single translation unit
	*	.h is from c++
	*	no extension is from c
	*/
	InitLog();
	Log("Lets go!!");

	/*
	* Debugging 
	*/
	int cc = 8;
	cc++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++) {
		const char c = string[i];
		std::cout << c << std::endl;
	}



	//Condidtions
	int x = 5;
	// check if 2 ints are equal 
	bool comparisonReslt = x == 5;
	if (comparisonReslt == true) {
		Log("Hola World!!!!!!!!!!!!");
	}


	if (x == 5)
		Log("x = 5");

	int y = 0;
	if (y)
		Log("y = 0");

	//loops
	// use foor wen you need to use a variable
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
		std::cout <<  n << std::endl;

	}

	for (int i = 0; i < 5; i++) {
		if (i > 2 ){
			break;//stop
			//return 0; sends 0 and stops
			// return can be anywhere
			// this can produce dead code if you never run the line after it. 
		}
		Log("I Loop!!!");
		std::cout << i << std::endl;
	}

	/*
	* Raw pointers
	* memory is the most important thing on the computer
	* pointers help manage and manipulate memory
	* memory is like one long street of houses
	* each house has an address or one byte
	* you need to read and write to the correct address or byte
	* 
	*/




	//wait for enter
	std::cin.get();
}
