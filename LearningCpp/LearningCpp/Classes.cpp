/*
* classes are a style of writing your code
* classes are for object oriented code
* it is a way to group data and functionality together
*/

class Player {
public:
	int x, y;
	int speed;

	// a method is a function inside of a class
	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

void PlayerClass() {
	Player player;

	player.Move(1, -1);
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
*	
*/

struct Vec {
	float x, y;
	void Add(const Vec& other) {
		x += other.x;
		y += other.y;
	}
};