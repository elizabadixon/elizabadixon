// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Mod_Expr_Node.h"
#include "Expr_Node_Visitor.h"


    // Dr. R: We can remove this as the Visitor now does this.
        //FIXED: Removed the execute function


int Mod_Expr_Node::accept(Expr_Node_Visitor & v)
{

    return v.Visit_Mod_Node(*this);

}

int Mod_Expr_Node::getPrecedence (void)
{

    return MOD_PRECEDENCE;

}
