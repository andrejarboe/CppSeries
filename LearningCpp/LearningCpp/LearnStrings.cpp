#include <iostream>
#include <string>
#define LOG(x) std::cout << x << std::endl;


// & says this is a reference so it wont get copied
// const we promise not to modify
void PrintString(const std::string& string) {
	std::cout << string << std::endl;
}

void LearnStrings() {
	LOG("**********************");
	LOG("***LearnStrings.cpp***");
	LOG("**********************");

	/*
	* a character is one byte
	* a string is an array of characters
	*/
	
	//strings are imputable so might as well make it const 
	//side note, if you don't use "new" then you do not need to delete
	char name[] = "Andre";
	std::cout << name << std::endl;
	name[2] = 'a';
	std::cout << name << std::endl;
	char name2[6] = { 'A', 'n', 'd', 'r', 'e', 0 };
	std::cout << name2 << std::endl;

	//correct way:
	std::string name3 = std::string("Andre") + " Jarboe";
	name3 += " hello!";
	std::cout << name2 << std::endl;
	bool contains = name3.find("dre") != std::string::npos;
 	std::cout << name3.size() << std::endl;


}