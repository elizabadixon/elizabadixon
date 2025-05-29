// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef MULT_EXPR_NODE_H_
#define MULT_EXPR_NODE_H_

#define MULT_PRECEDENCE 2

#include "Binary_Op_Comm.h"


class Mult_Expr_Node : public Binary_Op_Comm
{

    public:    
        //default constructor
        Mult_Expr_Node () = default;

        //destructor
        ~Mult_Expr_Node () = default;


        int accept(Expr_Node_Visitor & v);

        int getPrecedence (void);

};

#endif