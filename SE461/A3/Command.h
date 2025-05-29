// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Stack.h"
#include <exception>


/*

    Like class Expr_Command { virtual bool execute (Stack <int> & stack) = 0; } in the lecture.

    This class provides the basis for everything in this program. As every "entity" pertaining to the calculator entries should be an abstracted, isolated command of sorts,
    this class helps to carry that basis out, giving each command the ability to make small, meaningful changes. Entities are entered onto the stack (per the instructions) 
    for proper expression extraction and conversion (w/ that comes order of operations as well).

    elements of the program are initialized = 0 to declare a pure abstract element (whether it be for classes/methods/etc.)

*/


class Command
{

    public:

        //default constructor
        Command (void) = default;

        //destructor
        virtual ~Command (void) = default; //needs to be virtual bc there are virtual methods in this class

        
        //each operation is modifying the stack -- need to track and manipulate those actions somehow...
        
        virtual bool execute(Stack<int> & s) = 0; //allows expressions to be put on the stack to be manipulated properly

        virtual int precedence(void) = 0; //to use stack for infix to postfix conversion priority tracking for each "entity" based on the user/file input into the calculator

};

#endif