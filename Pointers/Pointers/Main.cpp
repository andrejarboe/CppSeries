#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main() {

	/*
	* Raw pointers
	* memory is the most important thing on the computer
	* pointers help manage and manipulate memory
	* memory is like one long street of houses
	* each house has an address or one byte
	* you need to read and write to the correct address or byte	
	* a pointer does not need a type but it helps us know what should be there
	*/

	int var = 8;
	//assign memory address into the pointer
	int* ptr = &var;
	//dereferencing the pointer lets you write to the pointer
	//now var = 10
	*ptr = 10;
	LOG(var);
	std::cin.get();
}