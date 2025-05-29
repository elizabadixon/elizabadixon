// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef EXPR_TREE_VISITOR_H_
#define EXPR_TREE_VISITOR_H_

#include "Expr_Node_Visitor.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Mult_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Num_Expr_Node.h"

class Expr_Tree_Visitor : public Expr_Node_Visitor
{

    public:

        Expr_Tree_Visitor (void) {};

        virtual ~Expr_Tree_Visitor (void) {};


        virtual int Visit_Add_Node(Add_Expr_Node & node);
        virtual int Visit_Sub_Node(Subtract_Expr_Node & node);
        virtual int Visit_Mult_Node(Mult_Expr_Node & node);
        virtual int Visit_Div_Node(Div_Expr_Node & node);
        virtual int Visit_Mod_Node(Mod_Expr_Node & node);
        virtual int Visit_Num_Node(Num_Expr_Node & node);


        class DivBy0 : public std::exception
        {
            public:

                DivBy0 (void) : std::exception() {};
        };

        class Mod_DivBy0 : public std::exception
        {
            public:

                Mod_DivBy0 (void) : std::exception() {};
        };

};

#endif