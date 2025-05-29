// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Multiply_Command.h"
#define MULTIPLY_PRECEDENCE 1

Multiply_Command::Multiply_Command (void)
{ 

}

Multiply_Command::~Multiply_Command (void)
{ 

}

int Multiply_Command::evaluateExpression(int i1, int i2)
{
    return i1 * i2;
}

int Multiply_Command::precedence()
{
    // Dr. R: Might make more sense to make this a preprocessor declaration to avoid hardcoding here.
        //FIXED: added #define [command name]_PRECEDENCE preprocessor to each appropriate command .cpp file

    return MULTIPLY_PRECEDENCE; //if going by PEMDAS? MDAS (1 thru 4)
}