/*
	#include <iostream>
	brings in cin and cout
	pick a platform
	pick debug or release to compile to
*/

//preprocessor
#include <iostream>
#include "Log.h"
using namespace std;


//functions from videos
void LearnHeaders();
void fromFunctions();
void LearnDebug();
void Sizes();
void Conditions();
void Pointers();
void References();
void PlayerClass();
void enityFunction();



class ConsoleLog {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLevel(int level) {
		m_LogLevel = level;
	}

	void Error(const char* message) {
		if(m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Warn(const char* message) {
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Info(const char* message) {
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main() {


	LearnHeaders();

	Sizes();
	fromFunctions();

	LearnDebug();
	Conditions();

	//loops
	// use for when you need to use a variable
	//	do the loop a countable number of times 
	//  or want to us the var in the loop
	// variable declaration; condition; call this before the next iteration of loop:
	for (int i = 0; i < 5; i++) {
		Log("Hello Loop!!!");
	}

	//use while when all you need is a condition.
	int i = 0;
	while (i < 5) {
		Log("While Loop");
		i++;
	}

	// do while
	// yuck 
	i = 0;
	do {
		Log("do while");
		i++;
	} while (i < 5);

	// control flow
	for (int n = 0; n < 5; n++) {
		if (n % 2 == 0) {
			continue;
		}
		Log("N Loop!!!");
		std::cout << n << std::endl;

	}

	for (int i = 0; i < 5; i++) {
		if (i > 2) {
			break;//stop
			//return 0; sends 0 and stops
			// return can be anywhere
			// this can produce dead code if you never run the line after it. 
		}
		Log("I Loop!!!");
		std::cout << i << std::endl;
	}

	/*
	* Raw pointers
	* memory is the most important thing on the computer
	* pointers help manage and manipulate memory
	* memory is like one long street of houses
	* each house has an address or one byte
	* you need to read and write to the correct address or byte
	*
	*/

	Pointers();
	References();

	PlayerClass();


	ConsoleLog consoleLog;
	//consoleLog.SetLevel(consoleLog.LogLevelError);
	consoleLog.Warn("Hello");
	consoleLog.Error("Hello");
	consoleLog.Info("Hello");


	enityFunction();

	//wait for enter
	std::cin.get();
}