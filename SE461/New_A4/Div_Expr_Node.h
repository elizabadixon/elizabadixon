// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef DIV_EXPR_NODE_H_
#define DIV_EXPR_NODE_H_

#define DIV_PRECEDENCE 2

#include "Binary_Op_Comm.h"
#include <exception>


class Div_Expr_Node : public Binary_Op_Comm
{

    public:    
        //default constructor
        Div_Expr_Node () = default;

        //destructor
        virtual ~Div_Expr_Node () = default;


        int accept(Expr_Node_Visitor & v);

        int getPrecedence (void);

        class DivBy0 : public std::exception
        {
            public:

                DivBy0 (void) : std::exception() {};
        };

};

#endif