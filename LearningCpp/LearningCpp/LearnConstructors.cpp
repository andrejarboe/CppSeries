#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class MyConstructor {
public:
	float X, Y;
	
	MyConstructor(float x, float y){
		X = x;
		Y = y;
	}


	void Print() {
		std::cout << X << ", " << Y << std::endl;
	}
};

void LearnContsructors() {
	LOG("***************************");
	LOG("***LearnConstructors.cpp***");
	LOG("***************************");

	/*
	* special type of method 
	* which runs every time we instantiate an object
	*/
	MyConstructor e(10.0f, 5.0f);
	//e.Init();
	//the constructor sets x and y to 0 automatically
	e.Print();
}