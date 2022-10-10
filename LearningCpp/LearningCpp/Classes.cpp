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