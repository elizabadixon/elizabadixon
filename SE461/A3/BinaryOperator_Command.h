// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _BINARYOPERATOR_COMMAND_H_
#define _BINARYOPERATOR_COMMAND_H_

#include "Command.h"

class BinaryOperator_Command : public Command
{
    public:
    
        //default constructor
        BinaryOperator_Command (void);

        //destructor
        virtual ~BinaryOperator_Command (void);

        virtual bool execute(Stack<int> &s);

        virtual int evaluateExpression(int i1, int i2) = 0; //pure virtual, as its functionality will be defined differently by each operator command [+, -, /, *, %]
        virtual int precedence() = 0; //pure virtual again, as its functionality will be defined differently by each operator command [+, -, /, *, %]


};

#endif