#include <iostream>
#include <string>

#include <stdlib.h>
#define LOG(x) std::cout << x << std::endl;

void StringLiterals() {
	LOG("************************");
	LOG("***StringLiterals.cpp***");
	LOG("************************");

	/*
	* String literal are always in read only
	*/


	// enables s-suffix for std::string literals
	using namespace std::string_literals; 
	//put the strings together
	//the s is a function
	std::string name0 = "Andre"s + " hello";

	//ignore escape characters
	// R stands for raw
	const char* example = R"(Line1

	Line2
	Line3
	Line4)";

	std::cout << example << std::endl;

	int nameSize = 8;
	//bad code:
	//const char* name[8] = "Andre678";
	//char* name[] = "Andre"

	char name[] = "Andre";
	name[3] = '2';
	std::cout << name << std::endl;

	//wide characters
	// 2 byte per character
	const wchar_t* name2 = L"Andre";

	// cha16
	// 2 byte per character
	const char16_t* name3 = u"Andre";

	//char32
	// 4 byte per character
	const char32_t* name4 = U"Andre";

	//u8 is optional
	// 1 byte per character
	const char* name5 = u8"Andre";

}