// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Num_Expr_Node.h"
#include "Expr_Node_Visitor.h"


//initializing constructor
Num_Expr_Node::Num_Expr_Node(int n) : number_(n)
{

}

int Num_Expr_Node::accept(Expr_Node_Visitor & v)
{

    return v.Visit_Num_Node(*this);

}

int Num_Expr_Node::getPrecedence (void)
{
    return NUM_PRECEDENCE;
}

int Num_Expr_Node::getNum(void)
{

    return this -> number_;

}