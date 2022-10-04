/*
	#include <iostream>
	brings in cin and cout
	pick a platform
	pick debug or release to compile to 
*/

//preprocessor
#include <iostream>

void Log(const char* message) {
	std::cout << message << std::endl;
}

int main() {
	//std::cout.print("Hello World!!!").print(std::endl);
	std::cout << "Hello World!!!" << std::endl;
	Log("Hello from Log function");
	//wait for enter
	std::cin.get();

	/*
		header files get included into .cpp files
		.cpp files get compiled individually into object files
		the linker then glues all the .obj files into a .exe 
		compile with ctrl f7 of compile button
			no linking happens when you compile a single file
			just mkaea an .opj file
		build 
	*/
}
