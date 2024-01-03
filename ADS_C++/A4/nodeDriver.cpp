// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
// #include "Node.h"
// #include "LinkedNode.h"
// #include "LinkedList.h"
#include "DoublyLinkedList.h"
#include <iostream>
#include <fstream>

int main()
{
    // Node node1(7);
    // Node node2(10);
    // Node node3(15);

    // // arrayOfNodes[0] = node1;
    // // arrayOfNodes[1] = node2;
    // // arrayOfNodes[2] = node3;

    // Node arrayOfNodes[3] = {node1, node2, node3}; //needs to allocate memory - can't be an empty list. cpp has no idea how big a node is supposed to be


    // node2.setValue(4);

    // std::cout<< "Value of Node2: " << node2.getValue() <<std::endl;
    // std::cout<< "Value of Node3: " << arrayOfNodes[2].getValue() <<std::endl;

    
    //------------- Phase 2:

    //other way to check LinkedNode

    // LinkedNode * node1 = new LinkedNode(5, nullptr, nullptr);
    // LinkedNode * node2 = new LinkedNode(10, nullptr, nullptr);
    // LinkedNode * node3 = new LinkedNode(15, nullptr, nullptr);
    

    // node1 -> setNextNode(node2);
    // node2 -> setNextNode(node3);

    // LinkedNode * now = node1;

    // while(now != nullptr)
    // {
    //     std::cout<< "Value " << now -> getValue() <<std::endl;
    //     now = now -> getNextNode();
    // }

    // delete [] node1;  //only need to delete first bc then it has a chain effect of taking care of the rest

    //****PHASE III

    // LinkedNode * head = new LinkedNode(15, nullptr, nullptr);

    // std::cout << "Value of LinkedNode: " << head -> getValue() << std::endl;

    // LinkedNode * almostTail = new LinkedNode(7, nullptr, nullptr);
    // LinkedNode * tail = new LinkedNode(10, nullptr, nullptr);

    // head -> setNextNode(almostTail);
    // almostTail -> setNextNode(tail);

    // LinkedNode * temp = head; //to make sure true head isn't lost

    // while(temp -> hasNextNode())
    // {
    //     std::cout << "Value of Linked Node: " << temp -> getValue() << std::endl;
    //     temp = temp -> getNextNode();
    // }
    
    // std::cout << "Value of Linked Node: " << temp-> getValue() << std::endl;

    // LinkedList Testing

    // LinkedList * LLnode = new LinkedList();

    // LLnode -> insert(15);
    // LLnode -> insert(7);
    // LLnode -> insert(10);
    // LLnode -> printList();

    // std::cout<< "Length: " << LLnode -> getLength() <<std::endl;

    // //new LinkedNode testing

    // LinkedList * myLLnode = new LinkedList();

    // LLnode -> insert(10);
    // LLnode -> insert(20);
    // LLnode -> insert(30);
    
    // //but losing true head bc pointing to next, so need the temp value
    
    // delete LLnode;

    // delete temp;
    // delete tail;
    // delete almostTail;
    //delete head;

    //***PHASE IV TEST**************

    // LinkedNode * newLNode = new LinkedNode(0, nullptr, nullptr);
    // DoublyLinkedList * DLLnode = new DoublyLinkedList();

    // DLLnode -> insertLinkedNode(newLNode, 15);
    // DLLnode -> insertLinkedNode(newLNode, 6);
    // DLLnode -> insertLinkedNode(newLNode, 7);
    // DLLnode -> insertLinkedNode(newLNode, 10);
    

    // DLLnode -> printList();

    // std::cout<< "Length: " << DLLnode -> getLength() << std::endl;

    // delete newLNode;
    // delete DLLnode;
    
    //***PHASE V TEST**************    

    
    // DoublyLinkedList sortdll;

    // DoublyLinkedList * dll = new DoublyLinkedList;
    // DoublyLinkedList * sortdll = new DoublyLinkedList();
    // LinkedNode * snewNode = new LinkedNode(0,nullptr,nullptr);
    // LinkedNode * newNode = new LinkedNode(0,nullptr,nullptr);

    // LinkedNode * h1insert = dll -> LinkedList::getHead();//-> getHead();
    // LinkedNode * t1insert = dll -> LinkedList::getTail(); //-> getTail();
    // LinkedNode * h2insert = sortdll -> LinkedList::getHead();//-> getHead();
    // LinkedNode * t2insert = sortdll -> LinkedList::getTail(); //-> getHead();
    // // LinkedNode * t1insert = dll.getTail();
    // // LinkedNode * h2insert = sortdll.getHead();
    // // LinkedNode * t2insert = sortdll.getTail();

    // int data(0), bdawghops(0);
    
    // std::ifstream file1;
    // file1.open("data.txt");

    // if(file1.is_open())
    // {
    //     while(!file1.eof())
    //     {
    //         file1 >> data;

    //         dll -> insertLinkedNode(/*newNode*/t1insert, data);
    //     }

    //     std::cout<< "test" <<std::endl;
    //     dll -> printList();
    //     std::cout<< "test" <<std::endl;
    //     file1.close();
    //     //file1.clear();

    

    //     std::ifstream file2("inserts.txt");

    //     if(file2.is_open())
    //     {
    //         while(!file2.eof())
    //         {
    //             int headCount(0), tailCount(0);

    //             file2 >> data;

    //             headCount = dll -> headHopCount(data);
    //             tailCount = dll -> tailHopCount(data);

    //             if(tailCount > headCount)
    //             {

    //                 for(int i=0; i<headCount; i++)
    //                 {
    //                     h1insert = h1insert -> getNextNode();
    //                 }

    //                 dll -> insertBeforeLinkedNode(h1insert, data);

    //                 bdawghops += headCount;

    //                 //delete insert;
    //             }
    //             else
    //             {
                    
    //                 for(int i=0; i<tailCount; i++)
    //                 {
    //                     t1insert = t1insert -> getPrevNode();
    //                 }

    //                 dll -> insertAfterLinkedNode(t1insert, data);
    //                 bdawghops += tailCount;

    //                 //delete insert;
    //             }

    //             dll -> printList();
    //         }
    //         file2.close();

    //         //delete insert;
    //     }
    //     else
    //     {
    //         std::cout<< "Cannot open inserts.txt... Try Again!" <<std::endl;
    //     }

    // }
    // else
    // {
    //     std::cout<< "Cannot open data.txt... Try Again!" <<std::endl;
    // }

    // //////////////////////////////////////////


    // int data2(0), bdawghops2(0);

    // std::ifstream file3("sorted.txt");

    // if(file3.is_open())
    // {
    //     while(!file3.eof())
    //     {
    //         file3 >> data2;
    //         sortdll -> insertLinkedNode(t2insert, data2);
    //     }

    //     sortdll -> printList();
    //     std::cout<< std::endl;

    //     file3.close();

    //     std::ifstream file4("inserts.txt");

    //     if(file4.is_open())
    //     {
    //         while(!file4.eof())
    //         {
    //             int headCount2(0), tailCount2(0);

    //             file4 >> data2;
    //             //
    //             headCount2 = sortdll -> headHopCount(data2);
    //             tailCount2 = sortdll -> tailHopCount(data2);

    //             if(tailCount2 > headCount2)
    //             {
            
    //                 for(int i=0; i<headCount2; i++)
    //                 {
    //                     h2insert = h2insert -> getNextNode();
    //                 }

    //                 sortdll -> insertBeforeLinkedNode(h2insert, data2);

    //                 bdawghops2 += headCount2;

    //                 //delete insert;
    //             }
    //             else
    //             {

    //                 for(int i=0; i<tailCount2; i++)
    //                 {
    //                     t2insert = t2insert -> getPrevNode();
    //                 }

    //                 sortdll -> insertAfterLinkedNode(t2insert, data2);
    //                 bdawghops2 += tailCount2;

    //                 //delete insert;
    //             }

    //             sortdll -> printList();
    //         }
            
    //         file4.close();
    //     }
    //     else
	// 	{
	// 		std::cout << "Error opening inserts.txt file... please try again!" << std::endl;
	// 	}     
    // }
    // else
	// {
	// 	std::cout << "Error opening sorted.txt file... please try again!" << std::endl;
	// } 

    // std::ofstream outfile("output.txt");

    // outfile << "Unsorted Big Dawg Hops: " << bdawghops <<std::endl;
    // outfile << "Sorted Bid Dawg Hops: " <<bdawghops2 <<std::endl;

    // outfile.close();

    // std::cout << "Final Unsorted Result: " << std::endl;
	// dll -> printList();
	// std::cout << std::endl;
			
    // // std::cout<< "and boom!";


	// std::cout << "Final Sorted Result: " << std::endl;
	// sortdll -> printList();
	// std::cout << std::endl;

    // std::cout<< "and boom!";
			
	// //file4.close();

    // // // delete newNode;
    // // // delete snewNode;
    // // delete dll;
    // // delete sortdll;


    // // delete h1insert;
    // // delete t1insert;
    // // delete h2insert;
    // // delete t2insert;
    
    // *** A6 TESTING ****

    DoublyLinkedList * dll = new DoublyLinkedList();

    std::cout<< "Inserting 15..." <<std::endl;
    dll -> insert(15);

    std::cout<< "Inserting 7..." <<std::endl;
    dll -> insert(7);

    std::cout<< "Inserting 10..." <<std::endl;
    dll -> insert(10);

    std::cout<< "Inserting 44..." <<std::endl;
    dll -> insert(44);

    std::cout<< "Inserting 54..." <<std::endl;
    dll -> insert(54);

    std::cout<< "Removing 15..." <<std::endl;
    dll -> remove(15);

    std::cout<< "Removing 44..." <<std::endl;
    dll -> insert(44);

    delete dll;

    return 0;
}