#include <iostream>

/*	Static
*	static inside and outside
*	static outside a class is internal 
*	static inside a class the var is shared
*	same goes for methods
*/

// this var is only linked inside the scoop of this translation unit
// meaning you can use the same var name in main.cpp
// to use this var in main.cpp you a have to add extern in front of var type:
// extern int s_Variable = 5;
// can use static for vars and functions
// want to use as much as you can if you do not need the var/function to be global
static int s_Variable = 5;


/*
*	Static for Classes and Structs in C++
*/

struct Entity
{
	//static make it so there is only one instance of these vars across all 
	static int x, y;

	void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

void enityFunction()
{
	std::cout << "****From Static.cpp****"<< std::endl;

	Entity e;
	Entity::x = 2;
	Entity::y = 3;

	Entity e1;
	Entity::x = 5;
	Entity::y = 8;

	//with Entity::x, Entity::y you will the same numbers for e and e1
	e.Print();
	e1.Print();
}