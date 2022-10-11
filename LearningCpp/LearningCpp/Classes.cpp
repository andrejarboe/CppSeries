#include <iostream>
#define LOG(x) std::cout << x << std::endl;

/*
* classes are a style of writing your code
* classes are for object oriented code
* it is a way to group data and functionality together
*/

class Player {
public:
	int x = 5, y = 4;
	int speed = 1;

	// a method is a function inside of a class
	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

void PlayerClass() {
	LOG("***************");
	LOG("***Class.cpp***");
	LOG("***************");

	Player player;

	player.Move(5, -1);

	LOG("Player.x: ");
	LOG(player.x);
	LOG("Player.y: ");
	LOG(player.y);
}

void Move(Player& player, int xa, int ya) {
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

/*
* CLASSES vs STRUCTS in C++
* class default is private
* struct default is public
* struct is backwards compatible with C
* use structs for plain old data/vars, example:
*	vector class
* use class when you have inheritance 
*/

struct Vec {
	float x, y;
	void Add(const Vec& other) {
		x += other.x;
		y += other.y;
	}
};