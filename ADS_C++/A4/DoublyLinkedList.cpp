// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() : LinkedList() //so head_ and tail_ already exist
{
    //DLLlength_=0;
}

DoublyLinkedList::~DoublyLinkedList()
{
    
}

void DoublyLinkedList::remove(int data)
{
    if(isEmpty())
    {
        std::cout<< "List is empty!"<<std::endl;
        return;
    }
    else
    {
        bool isFound(false);

        if(data == LinkedList::getHead() -> getValue())
        {
            //LinkedList::setHead(LinkedList::getHead() -> getNextNode()); //REMEMBER TO CHANGE FUNCTION NAMES
            LinkedNode * oldHead = LinkedList::getHead();
            LinkedNode * newHead = LinkedList::getHead() -> getNextNode();

            LinkedList::setHead(newHead);

            oldHead -> setNextNode(nullptr); //need to break connection V too
            newHead -> setPrevNode(nullptr);

            delete oldHead;

            isFound = true;

        }
        else if(data == LinkedList::getTail() -> getValue())
        {
            LinkedNode * oldTail = LinkedList::getTail();
            LinkedNode * newTail = LinkedList::getTail() -> getPrevNode();

            LinkedList::setTail(newTail);

            oldTail -> setPrevNode(nullptr);
            newTail -> setNextNode(nullptr);

            delete oldTail;

            isFound = true;
        }
        else
        {
            LinkedNode * curNode = LinkedList::getHead(); //current node
            

            while(curNode != nullptr && !isFound)
            {
                if(curNode -> getValue() == data)
                {
                    //remove
                    LinkedNode * nextNode = curNode -> getNextNode();
                    LinkedNode * prevNode = curNode -> getPrevNode();

                    //repoint and isolate node
                    nextNode -> setPrevNode(prevNode);
                    prevNode -> setNextNode(nextNode);

                    curNode -> setPrevNode(nullptr);
                    curNode -> setNextNode(nullptr);

                    delete curNode;

                    isFound = true; //another conditiion in while loop - found, no need to keep searching
                }
                else
                {
                    curNode = curNode -> getNextNode();
                }
            }

            if(!isFound)
            {
                std::cout<< "Element doesn't exist in list." <<std::endl;
            }
            else
            {
                std::cout<< "Element " << data << " has been removed!" <<std::endl;
            }

        }
    }
}

void DoublyLinkedList::printList()
{
    //std::cout<< " " <<std::endl;
    LinkedNode * traversingLL = getHead();
    //LinkedNode * TtraversingLL = getTail();
    // std::cout<< traversingLL -> getValue() <<std::endl; //should cout?
    //std::cout<< " " <<std::endl;

    do
    {
        std::cout<< traversingLL -> getValue(); //should cout?
        traversingLL = traversingLL -> getNextNode();

        if(traversingLL != nullptr) //if a connection, the DLL works and should print out the format needed
        {
            std::cout<< "<-->";
        }
        else if(traversingLL == getTail())
        {
            std::cout<< "<-->" << getTail() -> getValue();
        }

    }while(traversingLL != nullptr);

    std::cout<< " " <<std::endl;

}

void DoublyLinkedList::insertLinkedNode(LinkedNode * node, int data) //* node in this case is what is being inserted, data is the contents
{
    
    
    if(/*LLinst_.*/getHead() == nullptr) //if the head's value is null, have to set value. to insert a node, you have to have an instance of a linked list
    {
        LinkedNode * initNode = new LinkedNode(data, nullptr, nullptr);
        
        /*LLinst_.*/setHead(initNode);
        /*LLinst_.*/setTail(initNode);

        //DLLlength_++;
    }
    else //like if the head isn't null, have to have proper instance of tail in order to insert?
    {
        LinkedNode * initNode = new LinkedNode(data, nullptr, /*LLinst_.*/getTail()); //remember: LinkedNode(int data, LinkedNode * nextNode, LinkedNode * prevNode);
        
        /*LLinst_.*/getTail() -> setNextNode(initNode);
        /*LLinst_.*/setTail(initNode);
    }

    std::cout << "Inserting " << data << "..." << std::endl;

    DLLlength_++;
}

void DoublyLinkedList::insertAfterLinkedNode(LinkedNode * node, int data) //like next
{
    

    if(!node -> hasNextNode())
    {
        LinkedNode * initNode = new LinkedNode(data, nullptr, node); //last parameter is node bc is the next node doesn't have a next, a node is the prev

        /*LLinst_.*/setTail(initNode);
        
        node -> setNextNode(initNode);
    }
    else
    {
        LinkedNode * initNode2 = new LinkedNode(data, node -> getNextNode(), node);

        node -> getNextNode() -> setPrevNode(initNode2); //then can move
        node -> setNextNode(initNode2);
    }

    std::cout << "Inserting " << data << "..." << std::endl;
    DLLlength_++;
}
        
        
void DoublyLinkedList::insertBeforeLinkedNode(LinkedNode * node, int data) //like ^ but prev
{
    
    
    if(!node -> hasPrevNode())
    {
        LinkedNode * initNode = new LinkedNode(data, node, nullptr); //compare nullptrs to insertAfter!

        /*LLinst_.*/setHead(initNode);

        node -> setPrevNode(initNode);
    }
    else
    {
        LinkedNode * initNode2 = new LinkedNode(data, node, node -> getPrevNode());

        node -> getPrevNode() -> setNextNode(initNode2); //
        node -> setPrevNode(initNode2);
    }

    std::cout << "Inserting " << data << "..." << std::endl;
    DLLlength_++;
}

int DoublyLinkedList::getLength()
{
    return DLLlength_;
}

// int DoublyLinkedList::headHopCount(int data)
// {
//     int hopstandin_ = 0;
//     LinkedNode * test = getHead();

//     if(data < test -> getValue())
//     {
//         return 0;
//     }
//     else if(data < getTail() -> getValue())
//     {
//         return DLLlength_ + 1;
//     }
//     else
//     {
//         while(!(test -> getNextNode() -> getValue() > data && test -> getValue() <= data) && hopstandin_ < DLLlength_)
//         {
//             test = test -> getNextNode();
//             hopstandin_++;
//         }

//         return hopstandin_ + 1;
//     }
// }

// int DoublyLinkedList::tailHopCount(int data)
// {
//     int hopstandin_ = 0;
//     LinkedNode * test = getTail();

//     if(data > test -> getValue())
//     {
//         return 0;
//     }
//     else if(data < getHead() -> getValue())
//     {
//         return DLLlength_ + 1;
//     }
//     else
//     {
//         while(!(test -> getValue() > data && test -> getPrevNode() -> getValue() <= data) && hopstandin_ < DLLlength_ - 1)
//         {
//             test = test -> getPrevNode();
//             hopstandin_++;
//         }

//         return hopstandin_ + 1;
//     }

//}