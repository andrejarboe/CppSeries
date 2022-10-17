#include <iostream>
// Use #include <string> when you use a variable 
// that has type std::string
#include <string>
#define LOG(x) std::cout << x << std::endl;


/*
* Why use it
* when you mark something as private you are saying 
* do not use there anywhere else
* example:
*	if you change x position of a button 
*	the button might have to be re rendered for the effects top take place
*	so just make a method that can access the position and refresh 
*	and make that public
*/


//class default visibility is private 
class Entity {
private: 
	int x, y;

	void Print();
//only this class and all sub classes can use it
protected:
	int j;

//anyone can access it
public:
	int r = 0;

	Entity() {
		x = 0;
		j = 7;
	}
};

class Player : public Entity {
public:
	Player() {
		//can not access x because it is private in entity
		//x = 2;

		//is protected but we are a sub class so we can uses it 
		j = 42;
	}
};

//struct default visibility is public
struct thisStruct {

};

void LearnVisibility() {
	LOG("*************************");
	LOG("***LearnVisibility.cpp***");
	LOG("*************************");

	Entity n;
	n.r = 97;

}