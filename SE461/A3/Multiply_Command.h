// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_

#include "BinaryOperator_Command.h"

class Multiply_Command : public BinaryOperator_Command
{

    public:

        //default constructor
        Multiply_Command (void);

        //destructor
        virtual ~Multiply_Command (void);

        //to-be-defined in the .cpp file like an multiplication expression -- i1 * i2, etc.
        virtual int evaluateExpression(int i1, int i2);
        virtual int precedence();

};

#endif