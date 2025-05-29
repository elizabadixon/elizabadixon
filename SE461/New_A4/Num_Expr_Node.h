// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef NUM_EXPR_NODE_H_
#define NUM_EXPR_NODE_H_

#define NUM_PRECEDENCE 4

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"

//a number would technically just be a node -- not binary nor unary. it's just part of the expression, not an operator.

class Num_Expr_Node : public Expr_Node
{

    public:

        Num_Expr_Node () = default;

        Num_Expr_Node(int n);

        virtual ~Num_Expr_Node () = default;


        int accept(Expr_Node_Visitor & v);

        int getPrecedence (void);

        int getNum (void);

    protected:

        int number_;

};

#endif