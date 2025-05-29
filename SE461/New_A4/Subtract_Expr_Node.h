// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef SUBTRACT_EXPR_NODE_H_
#define SUBTRACT_EXPR_NODE_H_

#define SUBTRACT_PRECEDENCE 1

#include "Binary_Op_Comm.h"
#include "Expr_Node_Visitor.h"


class Subtract_Expr_Node : public Binary_Op_Comm
{

    public:    

        //default constructor
        Subtract_Expr_Node (void) = default;

        //destructor
        ~Subtract_Expr_Node () = default;


        int accept(Expr_Node_Visitor & v);

        int getPrecedence (void);

};

#endif