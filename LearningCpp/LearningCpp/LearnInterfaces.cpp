#include <iostream>
// Use #include <string> when you use a variable 
// that has type std::string
#include <string>
#define LOG(x) std::cout << x << std::endl;

class Printable {
public:
	virtual std::string GetClassName() = 0;
};


class Entity : public Printable{
public:
	/*
	* generate a V table for this function so
	* that if it's overwritten you can point
	* to the correct function with this change
	*/
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity {
	//store a name
private:
	std::string m_Name;
	//specify a name
public:
	Player(const std::string& name)
		: m_Name(name) {}

	//Mark this overridden
	//function with the keyword override
	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }

};

void PrintNames(Entity* enitity) {
	std::cout << enitity->GetName() << std::endl;
}

void Print(Printable* obj) {
	std::cout << obj->GetClassName() << std::endl;
}

void LearnInterfaces() {
	LOG("*************************");
	LOG("***LearnInterfaces.cpp***");
	LOG("*************************");



	Entity* e = new Entity();
	PrintNames(e);

	Player* p = new Player("Andre");
	//std::cout << p->GetName() << std::endl;
	PrintNames(p);

	Print(e);
	Print(p);

}

