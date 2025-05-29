// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Add_Expr_Node.h"


    // Dr. R: We can remove this as the Visitor now does this.
        //FIXED: Removed int Add_Expr_Node::execute(int n1, int n2) {return n1 + n2;}


int Add_Expr_Node::accept(Expr_Node_Visitor & v)
{

    return v.Visit_Add_Node(*this);

}

int Add_Expr_Node::getPrecedence (void)
{

    return ADD_PRECEDENCE;

}
