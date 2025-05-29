// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_

#include "BinaryOperator_Command.h"

class Divide_Command : public BinaryOperator_Command
{

    public:

        //default constructor
        Divide_Command (void);

        //destructor
        virtual ~Divide_Command (void);

        //to-be-defined in the .cpp file like a division expression -- i1 ÷ i2, etc.
        virtual int evaluateExpression(int i1, int i2);
        virtual int precedence();

        class DivBy0 : public std::exception
        {
            public:

                //still needs a default constrcutor!
                DivBy0 (void) : std::exception() {};
        };

};

#endif