#include <iostream>

void LearnDebug() {
	/*
	* Debugging
	*/
	std::cout << "***************" << std::endl;
	std::cout << "***Debug.cpp***" << std::endl;
	std::cout << "***************" << std::endl;

	int cc = 8;
	cc++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++) {
		const char c = string[i];
		std::cout << c << std::endl;
	}

} 