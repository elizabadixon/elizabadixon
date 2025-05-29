// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Div_Expr_Node.h"
#include "Expr_Node_Visitor.h"


    // Dr. R: We can remove this as the Visitor now does this.
        //FIXED: removed int Div_Expr_Node::execute(int n1, int n2) { return n1/n2; }

int Div_Expr_Node::accept(Expr_Node_Visitor & v)
{

    return v.Visit_Div_Node(*this);

}

int Div_Expr_Node::getPrecedence (void)
{

    return DIV_PRECEDENCE;

}
