// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include "Command.h"
#include "Stack_Factory.h" //for now... just to check each command by themselves -- otherwise just add Stack_Factory


int infix_conversion(const std::string & infix, Array<Command *> & postfix); //int to hold/track size of Array container
void postfix_eval(Array<Command *> & postfix, int postEval_size);
//void create_general_command(std::string input); //probably will not use -- but just in case things get too cluttered...

int main()
{

    std::string input = "";
    bool quitSelected = false; //is it ok if the length/parenthesis/div by 0 errors cause the program -- still try to catch them... let the error get back to the user, but don't let it abort

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
        else
        {
        
            Array<Command *> postfix;
            int postEval_size;

            if((postEval_size = infix_conversion(input, postfix)) != 0) //if the conversion size isn't empty...
            {
                postfix_eval(postfix, postEval_size);
            }

        }

    }
    
    std::cout<< "Goodbye! Thank you for using this expression evaluator." <<std::endl;

    return 0;
}

int infix_conversion(const std::string & infix, Array<Command *> & postfix)
{

    //
    //conversion initial definitions!
    //
    std::istringstream input_parser(infix);
    std::string token = "";
    Stack_Factory factoryCommand; //factory instantiator/object instance
    Command * command = NULL; //initial instantiator for commands -- will reference factory for proper connection
    Stack<Command *> stackTemp; //holds operations for evaluating precedence properly
    Stack<Command *> stackNumHolder;
    int postSizeTracker(0); //track the container size of the converted expressions for proper iterating

    //parenthesis tracking -- unlike every other command, they must act as a pair and need extra elements to carry out their functionality
    int leftParenthesis(0);
    int leftParenthesis_found(0);
    int rightParenthesis(0);
    int rightParenthesis_found(0);


    while(!input_parser.eof())
    {

        input_parser >> token;

        if(token == "+")
        {

            std::cout<< "START of + conditional." <<std::endl;

            command = factoryCommand.create_add_command();

            std::cout<< "after command = create add command" <<std::endl;

            while(!stackTemp.is_empty() && stackTemp.top() -> precedence() >= command -> precedence()) 
            {
                std::cout<< "+ token top and pop while loop START." <<std::endl;
                postfix[postSizeTracker++] = stackTemp.top();
                stackTemp.pop();
                std::cout<< "END + token top and pop while loop." <<std::endl;
            }

            std::cout<< "+ token command push." <<std::endl;
            stackTemp.push(command); //now the command is on the stack like the respective classes have set it up for
            

        }
        else if(token == "-")
        {
            command = factoryCommand.create_subtract_command();

            while(!stackTemp.is_empty() && stackTemp.top() -> precedence() >= command -> precedence())
            {
                std::cout<< "- token top and pop while loop START." <<std::endl;
                postfix[postSizeTracker++] = stackTemp.top();
                stackTemp.pop();
                std::cout<< "END + token top and pop while loop." <<std::endl;
            }

            stackTemp.push(command);
        }
        else if(token == "*")
        {
            command = factoryCommand.create_multiply_command();

            while(!stackTemp.is_empty() && stackTemp.top() -> precedence() >= command -> precedence())
            {
                std::cout<< "* token top and pop while loop START." <<std::endl;
                postfix[postSizeTracker++] = stackTemp.top();
                stackTemp.pop();
                std::cout<< "END * token top and pop while loop." <<std::endl;
            }

            stackTemp.push(command);
        }
        else if(token == "/")
        {
            command = factoryCommand.create_divide_command();

            while(!stackTemp.is_empty() && stackTemp.top() -> precedence() >= command -> precedence())
            {
                std::cout<< "/ token top and pop while loop START." <<std::endl;
                postfix[postSizeTracker++] = stackTemp.top();
                stackTemp.pop();
                std::cout<< "END / token top and pop while loop." <<std::endl;
            }

            stackTemp.push(command);
        }
        else if(token == "%")
        {
            command = factoryCommand.create_modulo_command();

            while(!stackTemp.is_empty() && stackTemp.top() -> precedence() >= command -> precedence())
            {
                std::cout<< "% token top and pop while loop START." <<std::endl;
                postfix[postSizeTracker++] = stackTemp.top();
                stackTemp.pop();
                std::cout<< "END % token top and pop while loop." <<std::endl;
            }

            stackTemp.push(command);
        }
        else if(token == "(")
        {

            command = factoryCommand.create_parenthesis_command();

            stackTemp.push(command);

            leftParenthesis++;

        }
        else if(token == ")") //the left doesn't need all of what is going to be below as it is the beginning -- while the right has to make sure that a pair is present
        {
            rightParenthesis++;
            rightParenthesis_found++;
            
            while(stackTemp.top() -> precedence() != 0) //will need to double-check each how command's precedence should be set before going through with this...
            {
                postfix[postSizeTracker++] = stackTemp.top();
                stackTemp.pop();
            }

            if(!stackTemp.is_empty())
            {
                leftParenthesis_found++;
                stackTemp.pop();
            }

            if(leftParenthesis != rightParenthesis) //a pair of parenthesis isn't present, checking for errors of sorts
            {
                while(!stackTemp.is_empty())
                {
                    stackTemp.pop();
                }

                for(int i=0; i < postSizeTracker; i++)
                {
                    delete postfix[postSizeTracker]; //= NULL; //may not want to delete, as that could cause seg fault/memory leak. at least if it's null, might be able to recoup memory
                }

                std::cout<< "ERROR -- Missing proper pair of parentheses. Please try again." <<std::endl; //maybe make an error throw for this like divide by 0

                return 0;

            }
        } //need something for create_number_command token ...
        else if(!(atoi(token.c_str()) == 0 && token[0] != '0')) //the number (command) precedence returns 0 so this just loops until it overloads/pops off all the memory?
        {

            std::cout<< "You have entered the number command conditional." <<std::endl;

            int integer(0);
            std::istringstream int_token(token);
            int_token >> integer;

            command = factoryCommand.create_number_command(integer);

            postfix[postSizeTracker++] = stackNumHolder.top();
            stackNumHolder.pop(); 
          

            //postfix[postSizeTracker++] = factoryCommand.create_number_command(integer);

            // while(!stackNumHolder.is_empty() && stackNumHolder.top() -> precedence() >= command -> precedence())
            // {
            //     std::cout<< "number command while START" <<std::endl;
            //     postfix[postSizeTracker++] = stackNumHolder.top();
            //     stackNumHolder.pop();
            //     std::cout<< "END number command while" <<std::endl;
            // }

            std::cout<< "Outside number command while." <<std::endl;

            std::cout<< "End of the number command conditional." <<std::endl;

        }
        else
        {
            while(!stackTemp.is_empty())
            {
                stackTemp.pop();
            }

            for(int i=0; i < postSizeTracker; i++)
            {
                delete postfix[postSizeTracker]; //= NULL;
            }

            std::cout<< "ERROR -- Invalid Input. Please try again." <<std::endl; //again, make a proper error throw for something like this

            return 0;

        }

    }
    
    //if there's any other error outside of the main token readings...
    if(leftParenthesis != rightParenthesis) //a pair of parenthesis isn't present, checking for errors of sorts
    {
        while(!stackTemp.is_empty())
        {
            stackTemp.pop();
        }

        for(int i=0; i < postSizeTracker; i++)
        {
            //delete postfix[i]; //= NULL; //may not want to delete, as that could cause seg fault/memory leak. at least if it's null, might be able to recoup memory
        }

        std::cout<< "ERROR -- Missing proper pair of parentheses. Please try again." <<std::endl; //maybe make an error throw for this like divide by 0

        return 0;

    }

    while(!stackTemp.is_empty())
    {
        postfix[postSizeTracker++] = stackTemp.top();
        stackTemp.pop();
    }

    delete command;

    return postSizeTracker;

}

void postfix_eval(Array<Command *> & postfix, int postEval_size)
{

    Stack<int> outputStack;
    int output(0);

    std::cout<< "You are in the posfix_eval method!" <<std::endl;

    try
    {
        for(int i=0; i < postEval_size; i++)
        {
            if(!(postfix[i] -> execute(outputStack)))
            {
                for(int j=0; j < postEval_size; j++)
                {
                    delete postfix[j]; //= NULL;
                }

                std::cout<< "The expression you've enetered is invalid. Please try again" <<std::endl; //make an error throw for this to stop the calculator process (like my other comments)

                return;

            }

            delete postfix[i]; //= NULL;
        }
    }
    catch(const Divide_Command::DivBy0 & e)
    {
        std::cout<< "ERROR -- You tried to divide by 0. Please try again." <<std::endl;
    }
    catch(const Modulo_Command::Mod_DivBy0 & e)
    {
        std::cout<< "ERROR -- You tried to divide by 0 with the modulo operation. Please try again." <<std::endl;
    }
    
    output = outputStack.top();
    outputStack.pop();

    std::cout<< "Output: " << output <<std::endl;

    return;

}
