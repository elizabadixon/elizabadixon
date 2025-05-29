// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

// Dr. R: It is fine to make this a Command but it may make your life harder...I appreciate your attempt as it is the right approach.

#include "Parenthesis_Command.h"
# define PARENTHESIS_PRECEDENCE 0

Parenthesis_Command::Parenthesis_Command(void)
{

}

Parenthesis_Command::~Parenthesis_Command(void)
{
    
}

bool Parenthesis_Command::execute(Stack<int> &s)
{
    
    return true; 

}

int Parenthesis_Command::precedence()
{
    return PARENTHESIS_PRECEDENCE; //either takes highest because it has to be parsed a certain way? idk about position though like... how would an expression like (3 + 2) * 3 vs. 3 + (2 * 3) be parsed?
}