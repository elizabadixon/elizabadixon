// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef EXPR_TREE_BUILDER_H_
#define EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"


class Expr_Tree_Builder : public Expr_Builder
{

    public:

        Expr_Tree_Builder (void) = default;

        ~Expr_Tree_Builder ();


        // virtual void build_binary_op (void);
        void build_add_op (void);
        void build_sub_op (void);
        void build_mult_op (void);
        void build_div_op (void);
        void build_mod_op (void);
        void build_num_op(int n);

        //from the https://shorturl.at/8TuQ9 algo
        void parse_op_token(int opPrecedence);
        void popConnectPush();
        void end_check();

        Expr_Node * getExpr (void);

        // Dr. R: What are these for?
            //FIXED: assuming you meant the empty builders, they were meant to be the initial part of building each operator node (kind of like a concrete null root or something) but
                    // I decided that they were redundant and not really necessary, so I've taken them out...

    private:

        Stack<Binary_Op_Comm *> opStack_;
        Stack<Expr_Node *> exprTStack_;

};

#endif