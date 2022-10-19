#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Entity {
private:
	int m_X, m_Y;
public:
	//can not modify the class
	int GetX() const{
		return m_X;
	}

	void SetX(int x) {
		m_X = x;
	}
};

void PrintEntity() {

}

void ConstKeyword() {
	LOG("************************");
	LOG("***StringLiterals.cpp***");
	LOG("************************");

	/*
	* Const is kinda fake
	* doesn't do much to the generated code
	* really just helps developers write code
	* its a promise to not change the value
	* a promise can be broken...
	* Bruh keep your promise!!!!
	* 
	* const int *A; ==> "A is a pointer to an int that is constant."
	* (or, depending on how you prefer to write it)
	* int const* A; ==> "A is a pointer to a const int"
	* but both are the same
	*/

	const int MAX_AGE = 50;
	
	const int *a = new int;

	*a = 2;
	//dont do this...
	a = (int*) &MAX_AGE;

	std::cout << *a << std::endl;


}