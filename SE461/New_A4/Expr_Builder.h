// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef EXPR_BUILDER_H_
#define EXPR_BUILDER_H_

#include "Binary_Op_Comm.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Mult_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Num_Expr_Node.h"

class Expr_Builder 
{

    public:

        //default constructor
        Expr_Builder (void) = default;

        //destructor
        virtual ~Expr_Builder (void) = default;


        //general starting point for the expression-to-be-operated-on
        virtual void build_add_op(void) = 0;
        virtual void build_sub_op(void) = 0;
        virtual void build_mult_op(void) = 0;
        virtual void build_div_op(void) = 0;
        virtual void build_mod_op(void) = 0;
        virtual void build_num_op(int n) = 0;

    protected:

        // Dr. R: Who is initializing these? Your constructor above is default.

                //to keep track of the expression nodes
                // Stack<Expr_Node*> exprStack_;

                // //to keep track of the operator nodes
                // Stack<Expr_Node*> opStack_;

        //FIXED: Since Expr_Builder (this class) is pure virtual, I moved the stacks to Expr_Tree_Builder where they're directly used
        

};

#endif