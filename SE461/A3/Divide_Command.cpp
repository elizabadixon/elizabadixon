// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Divide_Command.h"
# define DIVIDE_PRECEDENCE 2

Divide_Command::Divide_Command (void) 
{ 

}

Divide_Command::~Divide_Command (void)
{ 

}

int Divide_Command::evaluateExpression(int i1, int i2)
{

    if(i2 == 0)
    {
        throw DivBy0(); // I assume it's fine to just throw it because it will terminate the process just like a regular calculator would...
    }

    return i1 / i2;
}

int Divide_Command::precedence()
{
    return DIVIDE_PRECEDENCE; //if going by PEMDAS? MDAS (1 thru 4)
}