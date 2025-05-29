// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef EXPR_NODE_VISITOR_H_
#define EXPR_NODE_VISITOR_H_


// Dr. R: As this is a Pure Abstract Class (Interface) we need to use
//		  Forward Declaration otherwise we have a cycle when trying to 
//		  compile as our concrete Nodes need this file to be compiled
//		  but IT needs them to be compiled.
//
//        Forward Declaration is where we actually "specify" the user 
//		  defined type pre-compile time (in a sense). This is an 
//		  oversimplification but more or less what it is.
//
//		  An example:
//
//					class Add_Expr_Node;


//        FIXED: changed the includes below to be consistent with the intended forwarding functionality from Expr_Node_.h


class Add_Expr_Node;
class Subtract_Expr_Node;
class Mult_Expr_Node;
class Div_Expr_Node;
class Mod_Expr_Node;
class Num_Expr_Node;

class Expr_Node_Visitor
{

    public:


            // Dr. R: We don't need these as this Class is pure virtual
		// 		  and thus can't have an implementation.

        //  FIXED: Removed constructors/destructors here
        

        virtual int Visit_Add_Node(Add_Expr_Node & node) = 0;

        virtual int Visit_Sub_Node(Subtract_Expr_Node & node) = 0;

        virtual int Visit_Mult_Node(Mult_Expr_Node & node) = 0;

        virtual int Visit_Div_Node(Div_Expr_Node & node) = 0;

        virtual int Visit_Mod_Node(Mod_Expr_Node & node) = 0;

        virtual int Visit_Num_Node(Num_Expr_Node & node) = 0;

};

#endif