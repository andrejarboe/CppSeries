#include <iostream>

void Sizes() {

/*
		1 byte is 8 bits
		4 bytes is 32bits
		int is signed so one of the 32 bits is the + or - sign
		31 bits left for the data
		2^31 = 2.1b and can say + or -
		unsigned int is always + thus has 32bits
		2^32 = 4.29b
		char 2 bytes
		short 2
		int 4
		long usually 4
		long long usually 8
		all can be unsigned

		decimals have floats 4 bytes and doubles 8 bytes
		float var = 5.5f
		double var = 5.2

		bool
		either true or false
		0 = false
		any number ! = 0 is true

		yes 0 and 1 take up one bit
		but you can only address bytes
		but you can be smart and store 8 bools in 1 byte

		sizeof() tells you the size of the var
	*/
	std::cout << "****Sizes.cpp****" << std::endl;

	int var = 8; // data size -2b - 2b
	std::cout << var << std::endl;

	var = 20;
	std::cout << var << std::endl;
}