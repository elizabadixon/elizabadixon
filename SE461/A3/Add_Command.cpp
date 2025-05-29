// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Add_Command.h"
#define ADD_PRECEDENCE 3

Add_Command::Add_Command (void) 
{ 

}

Add_Command::~Add_Command (void)
{ 

}

int Add_Command::evaluateExpression(int i1, int i2)
{
    return i1 + i2;
}

int Add_Command::precedence()
{
    return ADD_PRECEDENCE; //if going by pemdas? MDAS (1 thru 4), addition would be 3 like A
}