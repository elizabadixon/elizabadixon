// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#include "TreeNode.h"

// TreeNode::TreeNode() : Node(), parent_(nullptr), leftChild_(nullptr), rightChild_(nullptr)
// {

// }

TreeNode::TreeNode(int data) : Node(data), parent_(nullptr), leftChild_(nullptr), rightChild_(nullptr), Color_(0), gPa_(nullptr) //nondefault
{

}

TreeNode::~TreeNode()
{
    if(leftChild_ != nullptr)
    {
        delete leftChild_;
    }

    if(rightChild_ != nullptr)
    {
        delete rightChild_;
    }
}

//setters

void TreeNode::setParent(TreeNode * parent)
{
    parent_ = parent;
}

void TreeNode::setLeftChild(TreeNode * leftChild)
{
    leftChild_ = leftChild;
}

void TreeNode::setRightChild(TreeNode * rightChild)
{
    rightChild_ = rightChild;
}

void TreeNode::setColor(bool color)
{
    Color_ = color;
}

void TreeNode::setGpa(TreeNode * gPa)
{
    gPa_ = gPa;
}

//getters

TreeNode * TreeNode::getParent()
{
    return parent_;
}

TreeNode * TreeNode::getLeftChild()
{
    return leftChild_;
}

TreeNode * TreeNode::getRightChild()
{
    return rightChild_;
}

bool TreeNode::getColor()
{
    if(Color_ == 0) //red 
    {
        return 0;
    }
    else //black //else not else if so that there's always a return
    {
        return 1;
    }
}

TreeNode * TreeNode::getGpa()
{
    return gPa_;
}

//just printing the color name!
void colorNamePrint(TreeNode * node)
{
    if(node -> getColor() == 0)
    {
        std::cout<< "RED" <<std::endl;
    }
    else if(node -> getColor() == 1)
    {
        std::cout<< "BLACK" <<std::endl;
    }
}

