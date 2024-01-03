// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "LinkedList.h"
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList : public LinkedList
{
    public:
        DoublyLinkedList();
        //DoublyLinkedList(); //copy constructor??
        /*virtual*/ ~DoublyLinkedList();
        
        virtual void printList();
        void insertLinkedNode(LinkedNode * node, int data);
        void insertAfterLinkedNode(LinkedNode * node, int data);
        void insertBeforeLinkedNode(LinkedNode * node, int data);
        
        int getLength();

        void remove(int data);
        //void removeLinkedNode(LinkedNode * node, int data);

        // int headHopCount(int data);
        // int tailHopCount(int data);

    private:
        //LinkedList LLinst_;
        int DLLlength_;
};
#endif