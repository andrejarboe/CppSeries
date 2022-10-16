#include <iostream>
using namespace std;
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

class MyClass {     // The class
public:           // Access specifier
	MyClass() {     // Constructor
		std::cout << "Hello World!";
	}
};

class Car {        // The class
public:          // Access specifier
	string brand;  // Attribute
	string model;  // Attribute
	int year;      // Attribute
	Car(string x, string y, int z) { // Constructor with parameters
		brand = x;
		model = y;
		year = z;
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
	
	MyClass obj;
	// Create Car objects and call the constructor with different values
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);

	// Print values
	cout << "\n";
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
}