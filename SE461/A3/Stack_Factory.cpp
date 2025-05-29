// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Stack_Factory.h"



Stack_Factory::Stack_Factory (void)
{ 

}

Stack_Factory::~Stack_Factory (void)
{ 

}


Add_Command * Stack_Factory::create_add_command (void)
{
	return new Add_Command();
}

Subtract_Command * Stack_Factory::create_subtract_command (void)
{
	return new Subtract_Command();
}

Multiply_Command * Stack_Factory::create_multiply_command (void)
{
	return new Multiply_Command();
}

Divide_Command * Stack_Factory::create_divide_command (void)
{
	return new Divide_Command();
}

Modulo_Command * Stack_Factory::create_modulo_command (void)
{
	return new Modulo_Command();
}

Number_Command * Stack_Factory::create_number_command (int n)
{
	return new Number_Command(n);
}

Parenthesis_Command * Stack_Factory::create_parenthesis_command (void)
{
	return new Parenthesis_Command();
}