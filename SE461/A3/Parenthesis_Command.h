// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _PARENTHESIS_COMMAND_H_
#define _PARENTHESIS_COMMAND_H_

#include "Command.h"

class Parenthesis_Command : public Command
{

    public:

        //default constructor
        Parenthesis_Command (void);

        //destructor
        virtual ~Parenthesis_Command (void);
        
        virtual bool execute(Stack<int> &s);
        
        virtual int precedence();
        
};

#endif