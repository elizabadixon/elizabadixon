// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _MODULO_COMMAND_H_
#define _MODULO_COMMAND_H_

#include "Binary_Op_Command.h"

class Modulo_Command : public BinaryOperator_Command
{

    public:

        //default constructor
        Modulo_Command (void);

        //destructor
        virtual ~Modulo_Command (void);

        //to-be-defined in the .cpp file like an remainder/modulus expression -- i1 mod i2, etc.
        virtual int evaluateExpression(int i1, int i2);
        virtual int precedence();

        class Mod_DivBy0 : public std::exception
        {
            public:

                //default constructor
                Mod_DivBy0 (void) : std::exception() {};
        };

};

#endif