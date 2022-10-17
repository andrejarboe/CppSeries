#include <iostream>
#define LOG(x) std::cout << x << std::endl;

/*
* Arrays store values of one type together
* The Array Name by itself is a memory address
* Arrays can be indexed through both for loops and pointer arithmetic
* Arrays can be made dynamically or statically (on the stack or the heap)
*/

void LearnArrays() {
	LOG("*********************");
	LOG("***LearnArrays.cpp***");
	LOG("*********************");

	//array of 5 ints
	int example[5];

	// 0 is the first element of the array
	example[0] = 2;
	example[4] = 4;

	int a = example[0];

	//memory access violation
	//example[-1] = 5;
	//example[5] = 17;
	//both are very very BAD


	std::cout << example[0] << std::endl;

	//prints the memory address because this is just a pointer type
	std::cout << example << std::endl; 


}