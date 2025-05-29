// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Expr_Tree_Builder.h"
#include "Expr_Tree_Visitor.h"

#include <string>
#include <sstream>
#include <cctype>


bool is_expr_parsed(std::string input, Expr_Tree_Builder * expr_tree);
bool is_op(std::string token);

class Input_Error : public std::exception 
{
    public:
        
        Input_Error (void): std::exception() { }
};

int main(int argc, char * argv [])
{
    
    std::string input = "";
    bool quitSelected = false;
    int output(0);

    Expr_Tree_Builder * expr_tree = new Expr_Tree_Builder;
    Expr_Tree_Visitor tree_visitor;
    Expr_Node * root = expr_tree -> getExpr();    

    while(!quitSelected)
    {    

        //UI display
        printf
        (
            "Welcome to the expression evaluator! Please enter a mathematical expression you would like to be calculated. \n\n"
            "!!Remember!! \n"
            "\t* Put spaces in between each entity of the expression (i.e. each integer, operator, parenthesis, token, etc.).\n"
            "\t* Type 'QUIT' (mind the all caps) to terminate the evaluator's process at any time.\n\n"
        );

        getline(std::cin, input);

        if(input == "QUIT")
        {
            quitSelected = true;
        }
        else if(is_expr_parsed(input, expr_tree) == false)
        {

            std::cout<< "The expression you entered is invalid. Please try again!" <<std::endl;

        }
        else
        {

            output = root -> accept(tree_visitor);

            std::cout<< "The output of the expression you entered is: " << output << std::endl;             

        }

        delete expr_tree;
        delete root;

    }

    std::cout<< "Thank you for using this Tree Calculator!" <<std::endl;

    return 0;
}


bool is_expr_parsed(std::string input, Expr_Tree_Builder * expr_tree)
{

    std::stringstream input_stream(input);
    std::string token = "";

    try
    {
        
        while(input_stream >> token)
        {

            if(is_op(token) == true)
            {

                expr_tree -> build_num_op(std::stoi(token)); //not atoi bc the strings not const char*s anymore

            }
            else if(token == "+")
            {

                expr_tree -> build_add_op();

            }
            else if(token == "-")
            {

                expr_tree -> build_sub_op();

            }
            else if(token == "*")
            {
            
                expr_tree -> build_mult_op();

            }
            else if(token == "/")
            {

                expr_tree -> build_div_op();

            }
            else if(token == "%")
            {

                expr_tree -> build_mod_op();

            }
            else
            {

                return false; //bc if something can't be built, then the expression can't be parsed

                throw Input_Error();

            }

        }

    }
    catch(...)
    {

        std::cout<< "ERROR -- The expression you entered has an invalid element. Please try again." <<std::endl;

        return false;
    }

    try
    {
        expr_tree -> end_check();
    }
    catch(...)
    {
        return false;
    }
    

    return true; //if it gets past end_check, then everything is cleared and the expression is parsed!

}

bool is_op(std::string token)
{

    if((token.find("-") == 0) && (token.length() > 1))
    {

        token = token.substr(1, token.length()); //then return the token w/ no unary negative so it can be parsed

    }
   
   for(int i=0; i<token.length(); i++)
   {

       if((!isdigit(token[i])))
       {

           return false; //if the token being checked for doesn't indicate a number, then it's not an operand (aka data -- what is being operated on) 
                                    //  (this is why this fxn is used to build the number node)

       }

   }

    return true; //if it gets to this point, that means that there is an operand found
}

