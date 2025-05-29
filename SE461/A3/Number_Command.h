// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_

#include "Command.h"

class Number_Command : public Command
{

    public:

        //default constructor
        Number_Command (void);

        //initializing constructor for the actual number value
        Number_Command (int n);

        //destructor
        ~Number_Command (void);
        
        virtual bool execute(Stack<int> &s); 
        
        virtual int precedence();

    private:

        int number_;


};

#endif