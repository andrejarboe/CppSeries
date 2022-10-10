#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main() {

	/*
	* Raw pointers
	* a pointer just points to a location in memory
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

	//the heap
	// hey can you allocate some memory for me please
	// allocates 8 bytes of memory:
	char* buffer = new char[8];

	//fills a block of memory
	// pointer, value, size in bytes
	memset(buffer, 0, 8);

	//this is on the heap so you should delete it when finished.
	delete[] buffer;

	std::cin.get();
}