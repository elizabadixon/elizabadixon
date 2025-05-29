// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef BINARY_OP_COMM_H_
#define BINARY_OP_COMM_H_

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"
#include "Stack.h"

class Binary_Op_Comm : public Expr_Node
{

    public:

        //default constructor
        Binary_Op_Comm (void);

        //destructor
        virtual ~Binary_Op_Comm ();


        //opted to use both get and set for binary children (rather than an initializing constructor) to make tree-building easier in visitor/builder/driver
        
        Expr_Node * getLeftChild (void);
        Expr_Node * getRightChild (void);

        void setLeftChild(Expr_Node * l_Child);
        void setRightChild(Expr_Node * r_Child);


        virtual int accept(Expr_Node_Visitor & v) = 0;

        virtual int getPrecedence () = 0;


    protected:

        Expr_Node * leftChild_;
        Expr_Node * rightChild_;


};

#endif