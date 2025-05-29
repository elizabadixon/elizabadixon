// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _STACK_FACTORY_H_
#define _STACK_FACTORY_H_

#include "Command_Factory.h"

class Stack_Factory : public Command_Factory
{

    public:

        Stack_Factory (void);
        
        virtual ~Stack_Factory (void);


        virtual Add_Command * create_add_command (void);

        virtual Subtract_Command * create_subtract_command (void);

        virtual Multiply_Command * create_multiply_command (void);

        virtual Divide_Command * create_divide_command (void);

        virtual Modulo_Command * create_modulo_command (void);

        virtual Number_Command * create_number_command (int n);

        virtual Parenthesis_Command * create_parenthesis_command (void);


};

#endif