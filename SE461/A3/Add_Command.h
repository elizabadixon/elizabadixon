// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "BinaryOperator_Command.h"

class Add_Command : public BinaryOperator_Command
{

    public:

        //default constructor
        Add_Command (void);

        //destructor
        virtual ~Add_Command (void);

        //to-be-defined in the .cpp file like an addiiton expression -- i1 + i2, etc.
        virtual int evaluateExpression(int i1, int i2);
        virtual int precedence();

};

#endif