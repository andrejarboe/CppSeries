#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int* value) {
	(*value)++;
}

void IncrementReference(int& value) {
	value++;
}

void References() {
	LOG("From Reference:");

	int a = 5;

	//// make a ref
	//// note & is apart of the type
	//// this var doesn't actual exist
	//// int& ref = a;

	IncrementReference(a);
	LOG(a);

	std::cin.get();

}
