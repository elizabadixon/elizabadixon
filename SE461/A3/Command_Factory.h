// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _COMMAND_FACTORY_H_
#define _COMMAND_FACTORY_H_

#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Modulo_Command.h"
#include "Number_Command.h"
#include "Parenthesis_Command.h"

class Command_Factory
{

    public:

        Command_Factory (void) = default; //make = to default or else it doesn't have a tangible definition that resonates with virtuals.

        virtual ~Command_Factory (void) = default;


        //instantiations of each command object to be used in isolation

        virtual Add_Command * create_add_command (void) = 0;

        virtual Subtract_Command * create_subtract_command (void) = 0;

        virtual Multiply_Command * create_multiply_command (void) = 0;

        virtual Divide_Command * create_divide_command (void) = 0;

        virtual Modulo_Command * create_modulo_command (void) = 0;

        virtual Number_Command * create_number_command (int n) = 0;

        virtual Parenthesis_Command * create_parenthesis_command (void) = 0;

    private:

        //is there anything that shouldn't be accessed?


};

#endif