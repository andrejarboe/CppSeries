#include <iostream>
#include <array>
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
	int* ptr = example;

	// 0 is the first element of the array
	example[0] = 2;
	example[4] = 4;

	int a = example[0];

	//memory access violation
	//example[-1] = 5;
	//example[5] = 17;
	//both are very very BAD

	//the array stores its data in a row
	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
	}

	example[2] = 5;
	//adds 2 * 4
	*(ptr + 2) = 6;
	*(int*)((char*)ptr + 8) = 6;


	std::cout << example[0] << std::endl;

	//prints the memory address because this is just a pointer type
	std::cout << example << std::endl; 


	//can create arrays on the heap
	//this will be alive until we destroy it 
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
	{
		another[i] = 2;
	}
	delete[] another;

	int c[5];
	int count = sizeof(c) / sizeof(int); //5, can not trust this though
	//so do this:
	//static const int arrSize = 5;
	//int arr[arrSize];


	//std::array <int, 5> coolArr; 
	//this is safer...
}