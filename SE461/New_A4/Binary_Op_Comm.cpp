// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Binary_Op_Comm.h"

Binary_Op_Comm::Binary_Op_Comm (void) : leftChild_(NULL), rightChild_(NULL)
{

}

Binary_Op_Comm::~Binary_Op_Comm ()
{

    if((this -> getLeftChild()) != NULL)
    {
        delete this -> leftChild_;
    }

    if((this -> getRightChild()) != NULL)
    {
        delete this -> rightChild_;
    }

}

Expr_Node * Binary_Op_Comm::getLeftChild (void)
{

    return this -> leftChild_;

}

Expr_Node *  Binary_Op_Comm::getRightChild (void)
{

    return this -> rightChild_;

}

void Binary_Op_Comm::setLeftChild(Expr_Node * l_Child)
{

    this -> leftChild_ = l_Child;

}

void Binary_Op_Comm::setRightChild(Expr_Node * r_Child)
{

    this -> rightChild_ = r_Child;    

}
