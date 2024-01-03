// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "LinkedNode.h"

LinkedNode::LinkedNode(HashEntry entry, LinkedNode * nextNode, LinkedNode *prevNode) : Node(entry), nextNode_(nullptr), prevNode_(nullptr) //non-default constructor; //nullptr allows for an initial value; linkedNode_ where nextNode_
{
    // nextNode_ = nextNode; //linkedNode_; have to have two nodes to have a next node
    // prevNode_ = prevNode;
    //data_ = data;
}

LinkedNode::~LinkedNode() //if a linked node is already a nullptr, it's already deleted - if it has some sort of value, delete it
{
    if(nextNode_ != nullptr)
    {
        delete nextNode_;
    } 
}

// LinkedNode::LinkedNode():LinkedNode(0, nullptr, nullptr) //copy constructor //0, nullptr, nullptr
// {

// }

void LinkedNode::setNextNode(LinkedNode * nextNode)
{
    nextNode_ = nextNode; //_ from private in h file
    //data_ = val; NO!
}

LinkedNode * LinkedNode::getNextNode()
{
    return nextNode_;
}

bool LinkedNode::hasNextNode()
{
    bool nextNode(false);

    if(nextNode_ != nullptr)
    {
        nextNode = true;
    }
    
    return nextNode;
    
    if(nextNode_ == nullptr)
    {
        return false;
    }
    
    return true;
}

////////////////////

LinkedNode * LinkedNode::getPrevNode()
{   
    return prevNode_;
}

void LinkedNode::setPrevNode(LinkedNode * prevNode)
{
    prevNode_ = prevNode;
}

bool LinkedNode::hasPrevNode()
{
    bool prevNode(false);

    if(prevNode_ != nullptr)
    {
        prevNode = true;
    }

    return prevNode;

    if(prevNode_ = nullptr)
    {
        return false;
    }

    return true;

}