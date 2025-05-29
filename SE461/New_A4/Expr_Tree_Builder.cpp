// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Expr_Tree_Builder.h"


// Dr. R: Your opStack_ is nullptr here so you will have problems.

    //FIXED: stack no longer set to null
            
	// Dr. R: This is where you should be building the tree. See the 
	//		  following example on how to do so:
	//			https://shorturl.at/8TuQ9

            // FIXED: Followed the algo and optimized the reused lines of code by making helper functions instead of repeating the iffy, extensive conditionals I had before. And more is handled
                        // in the visitor and driver like I should have done before...

Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
    
    while(!(this -> opStack_.is_empty()))
    {
        if(this -> opStack_.top() != NULL)
        {

            delete this -> opStack_.top();
            this -> opStack_.pop();

        }
    }

    while(!(this -> exprTStack_.is_empty()))
    {
        if(this -> exprTStack_.top() != NULL)
        {

            delete this -> exprTStack_.top();
            this -> exprTStack_.pop();

        }
    }
}

void Expr_Tree_Builder::parse_op_token(int opPrecedence)
{
    //this block of code is resused a lot in the algo for each binary operator node -- might as well make it a helper fxn!

    /* 
            else // clear operator stack and push new one onto it (basically what popConnectPush() does)
            {
                do
                {
                    PopConnectPush;
                }
                while ((the operator stack is not empty) and (priority(T) < priority(operator at top of stack)));
            }
    */

    if(!(this -> opStack_.is_empty()))
    {

        Expr_Node * opTop = this -> opStack_.top();

        while(!(this -> opStack_.is_empty() && (opPrecedence < opTop -> getPrecedence())))
        {

            this -> popConnectPush();

            if(!(opStack_.is_empty()))
            {

                opTop = this -> opStack_.top();

            }

        }

    }
}

void Expr_Tree_Builder::popConnectPush()
{
    /* From https://shorturl.at/8TuQ9 algo

        PopConnectPush:
        {
            pop the top node off the operator stack and call it N;
            pop the top node off the tree stack and make it N's right child;
            pop the top node off the tree stack and make it N's left child;
            push N back into the tree stack;
        }
    */

    Binary_Op_Comm * N = this -> opStack_.top();
    this -> opStack_.pop();

    Expr_Node * right_child = this -> exprTStack_.top();
    this -> exprTStack_.pop();

    Expr_Node * left_child = this -> exprTStack_.top();
    this -> exprTStack_.pop();

    N -> setLeftChild(left_child);
    N -> setRightChild(right_child);

    this -> exprTStack_.push(N);

}

void Expr_Tree_Builder::end_check()
{

    //the final check when there are no tokens left in order to fully clear the stack and check for the "end" of the calculation process

    while(!(this -> opStack_.is_empty()))
    {

        this -> popConnectPush();

    }

}


void Expr_Tree_Builder::build_add_op (void)
{

    Binary_Op_Comm * add_node = new Add_Expr_Node();

    parse_op_token(add_node -> getPrecedence());

    this -> opStack_.push(add_node);

}

void Expr_Tree_Builder::build_sub_op (void)
{

    Binary_Op_Comm * sub_node = new Subtract_Expr_Node();

    parse_op_token(sub_node -> getPrecedence());

    this -> opStack_.push(sub_node);

}

void Expr_Tree_Builder::build_mult_op (void)
{

    Binary_Op_Comm * mult_node = new Mult_Expr_Node();

    parse_op_token(mult_node -> getPrecedence());

    this -> opStack_.push(mult_node);

}

void Expr_Tree_Builder::build_div_op (void)
{

    Binary_Op_Comm * div_node = new Div_Expr_Node();

    parse_op_token(div_node -> getPrecedence());

    this -> opStack_.push(div_node);

    //exception handled later

}

void Expr_Tree_Builder::build_mod_op (void)
{

    Binary_Op_Comm * mod_node = new Mod_Expr_Node();

    parse_op_token(mod_node -> getPrecedence());

    this -> opStack_.push(mod_node);

    //exception handled later

}

void Expr_Tree_Builder::build_num_op(int n)
{

    Expr_Node * num_node = new Num_Expr_Node(n);

    this -> exprTStack_.push(num_node);

}

Expr_Node * Expr_Tree_Builder::getExpr (void)
{
    //bc the only expression you can really access at once should be the top bc of the stack -- helpful to specify .top()

    return this -> exprTStack_.top();

}
