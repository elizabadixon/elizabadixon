// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Subtract_Command.h"
#define SUBTRACT_PRECEDENCE 4

Subtract_Command::Subtract_Command (void)
{ 

}

Subtract_Command::~Subtract_Command (void) 
{ 

}

int Subtract_Command::evaluateExpression(int i1, int i2)
{
    return i1 - i2;
}

int Subtract_Command::precedence()
{
    return SUBTRACT_PRECEDENCE; //if going by pemdas? MDAS (1 thru 4)
}