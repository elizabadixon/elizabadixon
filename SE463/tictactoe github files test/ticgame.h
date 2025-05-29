

#include <iostream>


const char human = 'X';
const char ai = 'O';

enum Player { HUMAN, AI };

struct Move {
	int x;
	int y;
};

class Game {
	char board[3][3];

public:
	Game();

    //board UI
	void printBoard();


	bool gameOver();

	bool checkWin(Player player);

	void play();

	void getHumanMove();

	int score();

	Move minimax(char AIboard[3][3]);

	int miniSearch(char AIboard[3][3]);

	int maxSearch(char AIboard[3][3]);

};
