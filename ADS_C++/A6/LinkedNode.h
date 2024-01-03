// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#include "Node.h"
#include "HashEntry.h"
#ifndef LINKEDNODE_H
#define LINKEDNODE_H

class LinkedNode : public Node
{
    public:
        LinkedNode(HashEntry entry, LinkedNode * nextNode, LinkedNode * prevNode); //_____ constructor? //added LinkedNode * prevNode
        
        //LinkedNode(const LinkedNode * node); //copy constructor. Don't have to worry about setting etc bc coming from inhertiance, but need to get and set next node
        
        virtual ~LinkedNode(); 
        
        void setNextNode(LinkedNode * nextNode);
        bool hasNextNode();
        LinkedNode * getNextNode();

        LinkedNode * getPrevNode();
        void setPrevNode(LinkedNode * prevNode);
        bool hasPrevNode();

    protected:
        LinkedNode() {}; //calls default constructor on Node (base class), but it can't... so we can make private aspects of Node protected
    
    private:
        LinkedNode * nextNode_; //eventually next node in list
        LinkedNode * prevNode_;
        HashEntry entry_;
        

};

#endif