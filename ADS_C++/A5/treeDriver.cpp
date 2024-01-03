// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

// #include "Node.h"
// #include "BinaryTree.h"
// #include "TreeNode.h"
#include "RedBlackTree.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{

    //BinaryTree * newTree = new BinaryTree();
    
    
    //*** IN-CLASS TESTING  ***
    
    // TreeNode * newNode = new TreeNode(7);

    // newTree -> setRoot(newNode);

    // BinaryTree * innewTree = new BinaryTree();

    // // newTree -> insert(3);
    // // newTree -> insert(18);
    // innewTree -> insert(7);
    // innewTree -> insert(4);
    // innewTree -> insert(2);
    // innewTree -> insert(10);
    // //innewTree -> insert(22);
    // // newTree -> insert(8);
    // newTree -> insert(15);

    // //inorder
    // innewTree -> inorder(innewTree -> getRoot());
    // std::cout<<std::endl<<std::endl;

    // //preorder
    // innewTree -> preorder(innewTree -> getRoot());
    // std::cout<<std::endl<<std::endl;

    // //postorder
    // innewTree -> postorder(innewTree -> getRoot());
    // std::cout<<std::endl<<std::endl;

    

    // std::cout<< "Left Child: " << newTree -> getRoot() -> getLeftChild() -> getValue() <<std::endl;
    // std::cout<< "Root: " << newTree -> getRoot() -> getValue() <<std::endl;
    // std::cout<< "Right Child: " << newTree -> getRoot() -> getRightChild() -> getValue() <<std::endl;

    // std::cout<< "After Delete Left Child: " << newTree -> getRoot() -> getLeftChild() -> getValue() <<std::endl;
    // std::cout<< "After Delete Root: " << newTree -> getRoot() -> getValue() <<std::endl;
    // std::cout<< "After Delete Right Child: " << newTree -> getRoot() -> getRightChild() -> getValue() <<std::endl;

    // std::cout<< "Right Child's Parent: " <<newTree -> getRoot() -> getRightChild() -> getParent() -> getValue() <<std::endl;
    // std::cout<< "Right Child's Child: " << newTree -> getRoot() -> getRightChild() -> getRightChild() -> getValue() <<std::endl;

    // std::cout<< "Left Child's Parent: " <<newTree -> getRoot() -> getLeftChild() -> getParent() -> getValue() <<std::endl;
    // std::cout<< "Left Child's Child: " << newTree -> getRoot() -> getLeftChild() -> getLeftChild() -> getValue() <<std::endl;

//*** PHASE I/II ****
    
    //BinaryTree * newTree = new BinaryTree();
    // RedBlackTree * rbt = new RedBlackTree();
    RedBlackTree * rbt = new RedBlackTree(); //unititialized because of conditionals - it's fine
    
    //RedBlackTree rbt;
    
    std::ifstream rbtFile;
    
    rbtFile.open("data1.txt");
   
    if(rbtFile.is_open())
    {
        int track = 0;

        while(!rbtFile.eof())
        {
            rbtFile >> track;
            rbt -> insert(track);
            std::cout<< track << " ";
        }
        
        std::cout<<std::endl; 

        //separated so much bc of weird operator errors... (not all in one line)
        std::cout<< "Red Nodes: ";
        rbt -> printRedNodes(rbt -> getRoot());
        std::cout<<std::endl;
        std::cout<< "Black Nodes: ";
        //std::cout<<std::endl;
        rbt -> printBlackNodes(rbt -> getRoot()); 
        std::cout<<std::endl;
        std::cout<< "Root: " << rbt -> getRoot() -> getValue() <<std::endl;
        
        if(rbt -> getRoot() -> getColor() == 1)
        {
            std::cout<< "Root Color: BLACK" <<std::endl;
        }
        if(rbt -> getRoot() -> getColor() == 0)
        {
            std::cout<< "Root Color: RED" <<std::endl;
        }
    }

    rbtFile.close();

    
    //delete newTree;
    delete rbt;
    //traversal
    //delete innewTree;

    return 0;
}