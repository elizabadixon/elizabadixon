// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <iostream>
#include "TreeNode.h"

class BinaryTree : public TreeNode //only ever have one root
{
    public:
        BinaryTree();
        //BinaryTree(BinaryTree * tree const); //copy constructor?
       ~BinaryTree();
        
        TreeNode * getRoot();
        
        void setRoot(TreeNode * root);

        void insert(int data);

        //traversal
        void inorder(TreeNode * root); //referenced in RBT
        void preorder(TreeNode * root); //referenced in RBT
        //void postorder(TreeNode * root);

        // void deleteElement(int data);

    protected:
        TreeNode * insertNode(TreeNode * root, TreeNode * newNode); //public for testing purposes - but would be private; TEST CODE PIECE BY PIECE
        //TreeNode * deleteNode(TreeNode * root, int data);    
    private:
        TreeNode * root_; //of whole tree, not just subtree like root
        
};
#endif