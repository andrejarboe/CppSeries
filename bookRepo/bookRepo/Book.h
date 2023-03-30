#pragma once
#include <iostream>
#include <iomanip> //used for setting the with in the out put stream
#include "BookType.h"

class Book {
public:
	const static int priceArraySize = 3;

private:
	std::string bookID;
	std::string title;
	std::string author;
	double price[priceArraySize];
	//type name uppercase
	//instance lowercase
	BooKType bookType;

public:
	// parameterless constructor - sets to default values - you always write this!
	Book(); 
	// full constructor 
	Book(string bookID, string title, string author, double prices[], BooKType bookType);
	// destructor
	~Book();

	/* getters aka accessors */ 
	string getID();
	string getTitle();
	string getAuthor();
	//an array name is a pointer, but an array name is a pointer that is constant
	// therefor arrayName++ will not move
	double* getPrices();
	BooKType getBookType();

	/*Setters aka mutators */
	void setID(string ID);
	void setTitle(string title);
	void setAuthor();
	void setPrices();
};