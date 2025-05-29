// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Mult_Expr_Node.h"
#include "Expr_Node_Visitor.h"


int Mult_Expr_Node::accept(Expr_Node_Visitor & v)
{

    return v.Visit_Mult_Node(*this);

}

int Mult_Expr_Node::getPrecedence (void)
{

    return MULT_PRECEDENCE;

}
