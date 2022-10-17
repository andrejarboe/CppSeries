#include <iostream>
// Use #include <string> when you use a variable 
// that has type std::string
#include <string>
#define LOG(x) std::cout << x << std::endl;


/*
* Virtual functions introduce
something called dynamic dispatch
which compilers typically implemented
by our V table a V table is basically
table which contains a mapping for all
the virtual functions but our base class
so that we can actually map them to the
correct overwritten function at runtime

if you want to override
function you have to mark the base
function in the base bar as virtual
*/
class Entity {
public: 
	/*
	* generate a V table for this function so
	* that if it's overwritten you can point
	* to the correct function with this change
	*/
	virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity {
//store a name
private:
	std::string m_Name;
//specify a name
public:
	Player(const std::string& name)
		: m_Name(name){}

	//Mark this overridden
	//function with the keyword override
	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* enitity) {
	std::cout << enitity->GetName() << std::endl;
}

void LearnVirtualFunctions() {
	LOG("*******************************");
	LOG("***LearnVirtualFunctions.cpp***");
	LOG("*******************************");


	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;
	PrintName(e);
	
	Player* p = new Player("Andre");
	//std::cout << p->GetName() << std::endl;
	PrintName(p);

	//Entity* entity = p;
	//std::cout << entity->GetName() << std::endl;


}