// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "BinaryOperator_Command.h"

class Subtract_Command : public BinaryOperator_Command
{

    public:

        //default constructor
        Subtract_Command (void);

        //destructor
        virtual ~Subtract_Command (void);

        //to-be-defined in the .cpp file like a subtraction expression -- i1 - i2, etc.
        virtual int evaluateExpression(int i1, int i2);
        virtual int precedence();

};

#endif