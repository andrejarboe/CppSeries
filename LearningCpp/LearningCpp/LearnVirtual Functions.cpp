#include <iostream>
// Use #include <string> when you use a variable 
// that has type std::string
#include <string>
#define LOG(x) std::cout << x << std::endl;

class Entity {
public: 
	std::string GetName() { return "Entity"; }
};

class Player : public Entity {
//store a name
private:
	std::string m_Name;
//specify a name
public:
	Player(const std::string& name)
		: m_Name(name){}

	std::string GetName() { return m_Name; }
};

void LearnVirtualFunctions() {
	LOG("*******************************");
	LOG("***LearnVirtualFunctions.cpp***");
	LOG("*******************************");


	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;
	
	Player* p = new Player("Andre");
	std::cout << p->GetName() << std::endl;

}