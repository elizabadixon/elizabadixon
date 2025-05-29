

#include <iostream>
#include <sstream>
#include <iomanip>
#include "ticgame.h"

Game::Game()
{
    
    for(int i=0; i<3; i++) 
    {
		for(int j=0; j<3; j++) 
        {
			board[i][j] = '-';
		}
	}
	
}

void Game::printBoard()
{
	
    std::cout << "-------------------";

	for(int i=0; i<3; i++)
    {
		std::cout << "\n|";

		for(int j=0; j<3; j++) 
        {
			std::cout << std::setw(3) << board[i][j] << std::setw(3) << " |";
		}
	}

	std::cout << "\n-------------------\n";

}

bool Game::checkWin(Player player)
{
    char playerType;

	if(player == HUMAN)
    {
        playerType = human;
    }
	else if(player == AI)
    {
        playerType = ai;
    }

	for(int i=0; i < 3; i++)
    {
		// to check horizontal sequences
		if(board[i][0] == playerType && board[i][1] == playerType && board[i][2] == playerType)
        {
			return true;
        } // to check vertical sequences
		else if(board[0][i] == playerType && board[1][i] == playerType&& board[2][i] == playerType)
        {
			return true;
        }
        
	}

	// Check diagonals
	if (board[0][0] == playerType && board[1][1] == playerType && board[2][2] == playerType) 
    {
		return true;
        
	} 
    else if (board[0][2] == playerType && board[1][1] == playerType && board[2][0] == playerType) 
    {
		return true;
	}

	return false;

}

bool Game::gameOver()
{
	if(checkWin(HUMAN))
    { 
        return true; 
    }
	else if(checkWin(AI)) 
    {
        return true;
    }

	bool emptySpace = false;

	for(int i=0; i<3; i++) 
    {
		if(board[i][0] == '-' || board[i][1] == '-' || board[i][2] == '-')
        {
			emptySpace = true;
        }
	}

	return !emptySpace;
}


int Game::score()
{
    if(checkWin(HUMAN)) 
    {
        return 10; 
    }
	else if(checkWin(AI)) 
    { 
        return -10; 
    }
    

    return 0;

}

Move Game::minimax(char AIboard[3][3])
{ 
    int algoMoveScore = 100; 
	Move algoMove;

	for(int i=0; i<3; i++) 
    {
		for(int j=0; j<3; j++) 
        {
			if(AIboard[i][j] == '-') 
            {
			    AIboard[i][j] = ai;

				int tempMoveScore = maxSearch(AIboard);

				if(tempMoveScore <= algoMoveScore) 
                {
				    algoMoveScore = tempMoveScore;

					algoMove.x = i;
					algoMove.y = j;
				}

				AIboard[i][j] = '-';
			}
		}
	}

	return algoMove;
}

int Game::maxSearch(char AIboard[3][3])
{   
    if(gameOver()) 
    {
        return score();
    }

	Move algoMove;

	int algoMoveScore = -1000;

	for(int i=0; i<3; i++) 
    {
		for(int j=0; j<3; j++) 
        {
			if(AIboard[i][j] == '-') 
            {
				AIboard[i][j] = human;

				int tempMoveScore = miniSearch(AIboard);

				if(tempMoveScore >= algoMoveScore) 
                {
					algoMoveScore = tempMoveScore;

					algoMove.x = i;
					algoMove.y = j;
				}

				AIboard[i][j] = '-';
			}
		}
	}

	return algoMoveScore;

}

int Game::miniSearch(char AIboard[3][3])
{
    
    if(gameOver()) 
    {
        return score();
    }

	Move algoMove;

	int algoMoveScore = 1000; 

	for(int i=0; i<3; i++) 
    {
		for(int j=0; j<3; j++)
        {
			if(AIboard[i][j] == '-')
            {
				AIboard[i][j] = ai;

				int tempMove = maxSearch(AIboard);

				if(tempMove <= algoMoveScore)
                {
					algoMoveScore = tempMove;

					algoMove.x = i;
					algoMove.y = j;
				}

				AIboard[i][j] = '-';
			}
		}
	}

	return algoMoveScore;

}

void Game::getHumanMove()
{
    int x, y = -1;

	while(x < 0 || x > 2 || y < 0 || y > 2) 
    {
		// check for valid moves

		std::cout << "Enter your move in coordinate form (y,x), ex: (2,3)." << std::endl;
		std::cout << "Your Move: ";

		char cordCalc;
		std::string restofline;

		std::cin >> cordCalc >> cordCalc;
		x = cordCalc- '0' - 1;

		std::cin >> cordCalc>> cordCalc;
		y = cordCalc- '0' - 1;

		getline(std::cin, restofline);
	}

	board[x][y] = human;
}

void Game::play() 
{
    int gameTurn = 0;
	printBoard();

	while( !checkWin(HUMAN) && !checkWin(AI) && !gameOver() ) 
    {
		    
        if(gameTurn % 2 == 0)
        {
            gameTurn++;
            getHumanMove();

			if(checkWin(HUMAN))
            { 
                std::cout << "You win!!!" << std::endl; 
            }

			// gameTurn++;
			printBoard();
            
        }
        else
        {
			
            //CPU move
			std::cout << std::endl << "CPU Move:" << std::endl;

			Move AImove = minimax(board);

			board[AImove.x][AImove.y] = ai;

			if(checkWin(AI)) 
            {
                std::cout << "CPU wins!!!" << std::endl;
            }

			gameTurn++;
			printBoard();
        
		} 

	}

    if(!checkWin(HUMAN) && !checkWin(AI) && gameOver())
    {
        std::cout<< "There is a draw!!!" <<std::endl;
    }

}
