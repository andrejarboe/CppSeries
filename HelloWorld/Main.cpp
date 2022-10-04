/*
	#include <iostream>
	brings in cin and cout
	pick a platform
	pick debug or release to compile to 
*/

//preprocessor
#include <iostream>

//Have to tell compiler that Log function exist with a declaration
// it just trust us that the Log function exist
// The linker will go find it
void Log(const char* message);

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
			just make an .opj file
			build will make .exe
	*/
}
