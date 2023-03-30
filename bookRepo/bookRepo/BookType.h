#pragma once
#include <string>

enum BooKType { UNDECIDED, FICTION, NONFICTION };

/*
* Parallel array pops out a string for each book type - use the book type as an index 
* The enum value allows you to do cout << bookTypeStrings[UNDECIDED]; and get:
* UNDECIDED
*/
static const std::string bookTypeStrings[] = { "UNDECIDED", "FICTION", "NONFICTION" }