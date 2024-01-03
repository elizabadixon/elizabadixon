// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "Node.h"


Node::Node(int val) : data_(val) 
{

}

// Node::~Node()
// {

// }

int Node::getValue() //could make inline, but need to make changes down the line
{
    return data_;
}

void Node::setValue(int val)
{
    data_ = val;
}