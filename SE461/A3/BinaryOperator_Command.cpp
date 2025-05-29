// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "BinaryOperator_Command.h"

//default constructor
BinaryOperator_Command::BinaryOperator_Command(void)
{ 

}

//destructor
BinaryOperator_Command::~BinaryOperator_Command(void)
{ 

}

//grab values appropriately from the stack, then push the output onto the stack so that it can be grabbed for manipulation
bool BinaryOperator_Command::execute(Stack<int> &s)
{

    // if(s.is_empty() == true)
    // {
    //     return false;
    // }
    // else
    // {
        int i1 = s.top();
        s.pop();

        int i2 = s.top();
        s.pop();

        int output = this -> evaluateExpression(i1, i2);
        s.push(output);

        return true;
    //}
    
}


