// Honor Pledge: I pledge that I have neither 
// given nor receieved any help on this assignment.

// We need this for input/output.
#include <iostream>

// Necessary for my little trick of using std::setw()
#include <iomanip>

// We need this to create a random number.
#include <stdlib.h> 

// We also need this to create a random number.
#include <ctime>

// Here we define the game length.
#define GAME_LENGTH 50

// Three REQUIRED functions for the program.
void advancePlayerA(int* ptrRacerA);
void advancePlayerB(int* ptrRacerB);
void printPosition(int* ptrRacerA, int* ptrRacerB);

// Main Function
int main()
{        
    // Define the starting location for each player.
    int playerA = 1, playerB = 1;

    // "Seeds" for a 'truly' random number generator.
    srand(time(0));
    
    std::cout << "Welcome to CSCI 240's Candy Land Game!" << std::endl;
       
    // We want to loop until one player wins...   
    while (playerA != GAME_LENGTH && playerB != GAME_LENGTH) 
    {
          advancePlayerA(&playerA);
          
          advancePlayerB(&playerB);
          
          printPosition(&playerA, &playerB);  
    }   
    
    if (playerA == GAME_LENGTH) 
    {
       std::cout << std::endl 
                 << "You reached Candy Castle! Enjoy your candy!" 
                 << std::endl;
    } 
    else
    {
         std::cout << std::endl 
                   << "Your friend reached Candy Castle! Better luck next time." 
                   << std::endl;
    }
           
    return 0;
}

// Method to advance "you" in the game. 
void advancePlayerA(int* ptrplayerA)
{
     int obstacalProb = 0;
    
     // We want an random integer between 1-10.
     obstacalProb = 1 + rand() % 10;
    
     if(obstacalProb >= 1 && obstacalProb <= 4)
     {
          // Move Forward 1
          *ptrplayerA += 1;  
     }
     else if(obstacalProb >= 5 && obstacalProb <= 6) //1
     {
           // Move Forward 2 
           *ptrplayerA += 2;   
     }
     else if(obstacalProb == 7) //2
     {
           // Mountain Pass 
           *ptrplayerA += 3;   
     }
     else if(obstacalProb == 8) //3
     {
          // Rainbow Trail
          *ptrplayerA += 5;
     }
     else if(obstacalProb == 9) //4
     {
          // Cherry Pitfalls
          *ptrplayerA -= 3;
     }
     else
     {
         // Molasses Swamp
         *ptrplayerA -= 5;      
     }
    
     // Check the boundary conditions...
     if(*ptrplayerA < 1)
     {
          // This ensures we can't go to a position less than 0.
          *ptrplayerA = 1;
     }
     else if(*ptrplayerA > GAME_LENGTH)
     {
          // This ensures we don't go past the finish line.
         *ptrplayerA = GAME_LENGTH;
     }
}

// Method to advance "your friend" in the game. 
void advancePlayerB(int* ptrplayerB)
{
     int obstacalProb = 0;
    
     // We want an random integer between 1-10.
     obstacalProb = 1 + rand() % 10;
    
     if(obstacalProb >= 1 && obstacalProb <= 3)
     {
          // Move Forward 1
          *ptrplayerB += 1;  
     }
     else if(obstacalProb == 4)
     {
           // Move Forward 2 
           *ptrplayerB += 2;   
     }
     else if(obstacalProb >= 5 && obstacalProb <= 6)
     {
           // Mountain Pass 
           *ptrplayerB += 3;   
     }
     else if(obstacalProb == 7)
     {
          // Rainbow Trail
          *ptrplayerB += 5;
     }
     else if(obstacalProb >= 8 && obstacalProb <= 9)
     {
          // Cherry Pitfalls
          *ptrplayerB -= 3;
     }
     else
     {
         // Molasses Swamp
         *ptrplayerB -= 5;      
     }
    
     // We need to check the boundary conditions...
     if(*ptrplayerB < 1)
     {
          // This ensures we can't go to a position less than 0.
          *ptrplayerB = 1;
     }
     else if(*ptrplayerB > GAME_LENGTH)
     {
          // This ensures we don't go past the finish line.
          *ptrplayerB = GAME_LENGTH;
     }
}

// Prints the current location of each player on the board. 
void printPosition(int* ptrplayerA, int* ptrplayerB)
{    
   if(*ptrplayerA == *ptrplayerB)
   {
      // We can't fall back if we are at the start...
      if(*ptrplayerA > 1)
      {
          // First we fall back one space...
          *ptrplayerA -= 1;
          
          // Then let's go ahead and print the updated position.  
          std::cout << std::setw(*ptrplayerA) << "A" 
           << std::setw(*ptrplayerB - *ptrplayerA) << "B"
           << std::setw(GAME_LENGTH+1 - *ptrplayerB) << "|";        
      }
      else 
      {
           // We should do something here...
           return;
      }                        
   }
   else if(*ptrplayerA < *ptrplayerB)
   {
      // If we are behind...
      std::cout << std::setw(*ptrplayerA) << "A" 
           << std::setw(*ptrplayerB - *ptrplayerA) << "B"
           << std::setw(GAME_LENGTH+1 - *ptrplayerB) << "|";
   }
   else
   {
      // If we are ahead...
      std::cout << std::setw( *ptrplayerB ) << "B" 
           << std::setw(*ptrplayerA - *ptrplayerB) << "A"
           << std::setw(GAME_LENGTH+1 - *ptrplayerA) << "|";
   }
      
   std::cout << std::endl;
}
