// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef MOD_EXPR_NODE_H_
#define MOD_EXPR_NODE_H_

#define MOD_PRECEDENCE 2

#include "Binary_Op_Comm.h"
#include <exception>


class Mod_Expr_Node : public Binary_Op_Comm
{
    public:    
        //default constructor
        Mod_Expr_Node () = default;

        //destructor
        virtual ~Mod_Expr_Node () = default;


        int accept(Expr_Node_Visitor & v);

        int getPrecedence (void);


        class Mod_DivBy0 : public std::exception
        {
            public:

                Mod_DivBy0 (void) : std::exception() {};
        };

};

#endif