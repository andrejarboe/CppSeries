/*
* fist and last
* doubly linked 
*/

#include <iostream>
#include <string>
#include "SexyLady.h"


class Node {
public:
	void setNext(Node* sexyLady);
	void setPrevious(Node* sexyLady);
	Node* getNext();
	Node* getPrevious();
	SexyLady* getLady();
	Node(Node* previous, Node* next, SexyLady* lady);

private:
	//pointer
	Node* previous;
	Node* next;
	SexyLady* lady;
};

//constructor 
Node::Node(Node* previous, Node* next, SexyLady* lady) {
	this->previous = previous;
	this->next = next;
	this->lady = lady;
}



//getters
std::string SexyLady::toString() {
	return firstName + " " + lastName;
}

Node* Node::getNext() {
	return this->next;
}

Node* Node::getPrevious() {
	return this->previous;
}

SexyLady* Node::getLady() {
	return this->lady;
}

//setters 
void Node::setNext(Node* sexyLady) {
	this->next = sexyLady;
}

void Node::setPrevious(Node* sexyLady) {
	this->previous = sexyLady;
}




int main() {
	SexyLady* lady1 = new SexyLady("Olivia", "Munn");
	SexyLady* lady2 = new SexyLady("Rachel", "Hernandez");
	SexyLady* lady3 = new SexyLady("Emily", "Wright");
	
	Node* node1 = new Node(nullptr, nullptr, lady1);
	Node* node2 = new Node(node1, nullptr, lady2);
	Node* node3 = new Node(node2, nullptr, lady3);

	node1->setNext(node2);
	node2->setNext(node3);

	Node* n = node1;

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << n->getLady()->toString() << std::endl;
		n = n->getNext();
	}
}