#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int* value) {
	(*value)++;
}

void IncrementReference(int& value) {
	value++;
}

void References() {
	LOG("*******************");
	LOG("***Reference.cpp***");
	LOG("*******************");

	int a = 5;
	int b = 8;

	//// make a ref
	//// note & is apart of the type
	//// this var doesn't actual exist
	//// int& ref = a;

	IncrementReference(a);
	LOG(a);


	LOG("Reference destructing");
	// can not change the ref 
	// also have to assign it on the same line
	a = 5;
	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	LOG(a);
	LOG(b);




}
