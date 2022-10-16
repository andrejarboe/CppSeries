/*
destructor is where you uninitialized
anything that you might have to or clean
any memory that you've used 

the destructor applies to both stack and
heap allocated objects 

so if you allocate an object using new when you
call delete the destructor will get
called if you just have a stack-based
object and when the scope and the object
will get deleted and thus the destructor
will get called let's dive in and take a
*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class MyDestructor{
public:
	float X, Y;

	MyDestructor(float x, float y) {
		X = x;
		Y = y;

		std::cout << "Created Constructor" << std::endl;

	}


	void Print() {
		std::cout << X << ", " << Y << std::endl;
	}

	//destroy stuff here so you do not get a memory leak
	~MyDestructor() {
		std::cout << "Destroyed Constructor" << std::endl;
	}
};


void  LearnDestructors() {
	LOG("***************************");
	LOG("***LearnDestructors.cpp***");
	LOG("***************************");

	MyDestructor e(10.0f, 5.0f);
}