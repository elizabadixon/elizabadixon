// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Expr_Tree_Visitor.h"


// Dr. R: If these are empty we can just put their {} in the header.
    //FIXED: constructor implementation taken out of .cpp w/ added brackets in header

// Dr. R: If these are empty we can just put their {} in the header.
    //FIXED: destructor implementation taken out of .cpp w/ added brackets in header


int Expr_Tree_Visitor::Visit_Add_Node(Add_Expr_Node & node)
{

        // Dr. R: Using the reference (this) would work here too.
            //FIXED: originally changed & node references to "this" keyword reference, but now causes an error after my refactoring...
            // (same for all below methods)

    int lhs_node = node.getLeftChild() -> accept(*this);

    int rhs_node = node.getRightChild() -> accept(*this);


    return lhs_node + rhs_node;
}

int Expr_Tree_Visitor::Visit_Sub_Node(Subtract_Expr_Node & node)
{

        // Dr. R: Using the reference (this) would work here too.
            //FIXED: changed & node references to "this" keyword reference


    int lhs_node = node.getLeftChild() -> accept(*this);

    int rhs_node = node.getRightChild() -> accept(*this);


    return lhs_node - rhs_node;
}

int Expr_Tree_Visitor::Visit_Mult_Node(Mult_Expr_Node & node)
{

        // Dr. R: Using the reference (this) would work here too.
            //FIXED: changed & node references to "this" keyword reference

    int lhs_node = node.getLeftChild() -> accept(*this);

    int rhs_node = node.getRightChild() -> accept(*this);


    return lhs_node * rhs_node;
}

int Expr_Tree_Visitor::Visit_Div_Node(Div_Expr_Node & node)
{

        // Dr. R: Using the reference (this) would work here too.
            //FIXED: changed & node references to "this" keyword reference

    int lhs_node = node.getLeftChild() -> accept(*this);

    int rhs_node = node.getRightChild() -> accept(*this);

    try
    {
       if(rhs_node == 0)
        {
            throw DivBy0();
        }
    }
    catch(const Div_Expr_Node::DivBy0 & e)
    {
        std::cout<< "ERROR -- You tried to divide by 0. Please try a different divisor!" <<std::endl;
    }

    
    return lhs_node / rhs_node;
}

int Expr_Tree_Visitor::Visit_Mod_Node(Mod_Expr_Node & node)
{

        // Dr. R: Using the reference (this) would work here too.
            //FIXED: changed & node references to "this" keyword reference

    int lhs_node = node.getLeftChild() -> accept(*this);

    int rhs_node = node.getRightChild() -> accept(*this);

    try
    {
       if(rhs_node == 0)
        {
            throw Mod_DivBy0();
        }
    }
    catch(const Mod_Expr_Node::Mod_DivBy0 & e)
    {
        std::cout<< "ERROR -- You tried to express a modulo by 0. Please try a different divisor!" <<std::endl;
    }

    
    return lhs_node % rhs_node;
}

int Expr_Tree_Visitor::Visit_Num_Node(Num_Expr_Node & node)
{

    return node.getNum();

}
