// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "LinkedNode.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList : public LinkedNode
{
    public:
        LinkedList();
        //LinkedList(); //copy constructor
        virtual ~LinkedList();
        
        bool isEmpty();
        int getLength();
        void insert(int element);
        void printList();
        void setHead(LinkedNode * node);
        void setTail(LinkedNode * node);
        LinkedNode * getHead();
        LinkedNode * getTail();
    
    private:
        LinkedNode * head_;
        LinkedNode * tail_;
        int LLlength_;
};
#endif