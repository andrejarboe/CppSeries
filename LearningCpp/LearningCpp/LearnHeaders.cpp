#include <iostream>
#include "Log.h"

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

void LearnHeaders() {
	Log("****Output form LearnHeaders.cpp****");
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
}