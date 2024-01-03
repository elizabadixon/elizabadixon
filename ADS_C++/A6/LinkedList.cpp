// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() //need initialization list?? - what elements should go here if any?
{
    //the start, will get values when operated on in driver!
    head_ = nullptr;
    tail_ = nullptr;
    LLlength_ = 0;
}

LinkedList::~LinkedList()
{
    if(head_ != nullptr)
    {
        delete head_; //(in reference to isEmpty()) the chain effect happens with deletion, but below needs to reference both
    }
}

bool LinkedList::isEmpty()
{
    if(head_ == nullptr && tail_ == nullptr) //just need head bc chain, right? don't need to check for tail_'s? NO! just makes checking incomplete - best to reference both...
    {
        return true;
    }
    else
    {
        return false;
    }
}

int LinkedList::getLength()
{
    return LLlength_;
}

void LinkedList::insert(HashEntry element)
{
    LinkedNode * LLnode = new LinkedNode(element,nullptr, nullptr); //Inserting... element

    std::cout<< "Inserting..." << element <<std::endl;

    if(head_ == nullptr) //another condition's starting point?
    {
        head_ = LLnode; //link from?
        tail_ = LLnode; //link to?
        LLlength_++; //if operated on to be not empty, should keep track of length if it has to be returned in getLength()
    }
    else
    {
        tail_ -> setNextNode(LLnode); //ensuring link to the end?
        tail_ = LLnode;
        LLlength_++; //bc if the end's value is point to another thing, it means a value is being added onto
    }
}

void LinkedList::printList()
{
    //get next node and iterate then print?

    LinkedNode * traversingLL = head_;

    // std::cout<< traversingLL -> getValue(); //getValue() bc returns data
    
    do//while the head_ has a value (therefore tail_ does) you have to get the value of what's next
    {
        std::cout<< traversingLL -> getValue(); //getValue() bc returns data
        traversingLL = traversingLL -> getNextNode();

        if(traversingLL != nullptr) //just formatting
        {
            std::cout<< "-->" << traversingLL -> getValue();
        }
    }while(traversingLL != nullptr);
    
    //std::cout<< " " <<std::endl;
}

LinkedNode * LinkedList::getHead()
{
    return head_;
}

LinkedNode * LinkedList::getTail()
{
    return tail_;
}

void LinkedList::setHead(LinkedNode * node)
{
    head_ = node;
}

void LinkedList::setTail(LinkedNode * node)
{
    tail_ = node;
}