#pragma once
#include <string>

class SexyLady {
public:
	std::string toString();
	SexyLady(std::string firstName, std::string lastName);


private:
	//data
	std::string firstName;
	std::string lastName;

};