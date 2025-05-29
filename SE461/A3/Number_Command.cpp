// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Number_Command.h"
# define NUMBER_PRECEDENCE 0

//default constructor
Number_Command::Number_Command(void) 
{ 

}

//initial number value constructor
Number_Command::Number_Command(int n) : number_(n)
{ 

}

//destructor
Number_Command::~Number_Command(void) 
{ 

}

bool Number_Command::execute(Stack<int> &s)
{

    s.push(this -> number_); //put number command element onto the stack to determine priority in conjunction w/ binary commands

    return true;

}

int Number_Command::precedence()
{
    return NUMBER_PRECEDENCE; //do nothing because it's just a number -- the binary operators determine precedence
}



