// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef EXPR_NODE_H_
#define EXPR_NODE_H_

#include "Stack.h"
#include "Expr_Node_Visitor.h"

#include <iostream>
#include <cstring>

//forwarding visitor initialization
class Expr_Node_Visitor;

class Expr_Node
{

    public:

        //default constructor
        Expr_Node (void) = default;

        //destructor
        virtual ~Expr_Node () = default;


        //to add visitor support to classes that don't directly use it yet -- traverses the tree. Think: << Expr_Tree -> accept(eval); int result = eval.result;
        virtual int accept(Expr_Node_Visitor & v) = 0;

        //based on PEMDAS (etc.)
        virtual int getPrecedence (void) = 0;

};

#endif