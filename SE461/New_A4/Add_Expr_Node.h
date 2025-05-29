// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef ADD_EXPR_NODE_H_
#define ADD_EXPR_NODE_H_

#define ADD_PRECEDENCE 1

#include "Binary_Op_Comm.h"
#include "Expr_Node_Visitor.h"

class Add_Expr_Node : public Binary_Op_Comm
{   
    public:    

        //default constructor
        Add_Expr_Node () = default;

        //destructor
        ~Add_Expr_Node () = default;
        
        int accept(Expr_Node_Visitor & v);

        int getPrecedence (void);

};

#endif