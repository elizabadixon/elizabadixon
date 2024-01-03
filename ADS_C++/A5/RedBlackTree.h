// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H
#include "BinaryTree.h"
#include <iostream>

class RedBlackTree : public BinaryTree
{
    public:
        RedBlackTree();
        //RedBlackTree(); need copy constructor?
        virtual ~RedBlackTree();

        virtual void insert(int data);

        void printRedNodes(TreeNode * root); //0, inorder
        void printBlackNodes(TreeNode * root); //1, postorder

    private:
        void rotateLeft(TreeNode *& root, TreeNode *& newNode);
        void rotateRight(TreeNode *& root, TreeNode *& newNode);
        void balanceColor(TreeNode *& root, TreeNode *& newNode);

};
#endif
