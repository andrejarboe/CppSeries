/*
* Put all functionality in base class (parent) 
* - the class being inherited from
* then use it in a derived class (child) 
* - the class that inherits from another class
*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Enity {
public:
	float X, Y;

	void Move(float xa, float ya) {
		X += xa;
		Y += ya;
	}

};

class Player : public Enity {
public:
	const char* Name;

	void PrintName() {
		std::cout << Name << std::endl;
	}

};

void LearnInheritance() {
	LOG("**************************");
	LOG("***LearnInheritance.cpp***");
	LOG("**************************");

	Player playerOne;
	playerOne.Name = "P1";
	playerOne.PrintName();
}