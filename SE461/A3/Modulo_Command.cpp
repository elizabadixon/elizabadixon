// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Modulo_Command.h"
# define MOD_PRECEDENCE 2

Modulo_Command::Modulo_Command (void) 
{ 

}

Modulo_Command::~Modulo_Command (void)
{ 
    
}

int Modulo_Command::evaluateExpression(int i1, int i2)
{

    if(i2 == 0)
    {
        throw Mod_DivBy0(); 
    }
    
    return i1 % i2;
}

int Modulo_Command::precedence()
{
    return MOD_PRECEDENCE; //if going by PEMDAS? MDAS (1 thru 4), modulo would be 2 like D
}