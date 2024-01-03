// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#ifndef TREE_NODE_H
#define TREE_NODE_H
#include "Node.h"
#include <iostream>

class TreeNode : public Node
{
    public:
        TreeNode(int data);
        //TreeNode(/*TreeNode * node, */const TreeNode & node);
        
        ~TreeNode();

        //getValue() declared public in Node.h

        //getters/setters
        void setParent(TreeNode * parent);
        void setLeftChild(TreeNode * leftChild);
        void setRightChild(TreeNode * rightChild);
        void setColor(bool color);
        void setGpa(TreeNode * gPa);
        
        TreeNode * getParent();
        TreeNode * getLeftChild();
        TreeNode * getRightChild();
        bool getColor();
        TreeNode * getGpa();

        void colorNamePrint(TreeNode * node); //need to convert bool to a string by pointing

    protected:
        TreeNode() {}; //inheritance purposes bc need have data to create a tree node

    private:
        //int data_;
        TreeNode * parent_;
        TreeNode * leftChild_;
        TreeNode * rightChild_;
        TreeNode * gPa_;
        bool Color_;
};
#endif