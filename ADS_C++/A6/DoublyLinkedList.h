// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "LinkedList.h"
#include "HashEntry.h"
#include <iostream>
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList : public LinkedList
{
    public:
        DoublyLinkedList();
        //DoublyLinkedList(); //copy constructor??
        ~DoublyLinkedList();
        
        virtual void printList();
        void insertLinkedNode(LinkedNode * node, HashEntry entry);
        void insertAfterLinkedNode(LinkedNode * node, int data);
        void insertBeforeLinkedNode(LinkedNode * node, int data);
        
        int getLength();

        void remove(int key);
        //void removeLinkedNode(int key);

        int find(int key);

    private:
        //LinkedList LLinst_;
        int DLLlength_;
};
#endif