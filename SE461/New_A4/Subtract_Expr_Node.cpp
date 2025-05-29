// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Subtract_Expr_Node.h"


// Dr. R: We can remove this as the Visitor now does this.
    //FIXED: Removed the execute function


int Subtract_Expr_Node::accept(Expr_Node_Visitor & v)
{

    return v.Visit_Sub_Node(*this);

}

int Subtract_Expr_Node::getPrecedence (void)
{

    return SUBTRACT_PRECEDENCE;

}
