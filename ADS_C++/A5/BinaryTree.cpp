// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#include "BinaryTree.h"

BinaryTree::BinaryTree() : root_(nullptr)
{

}

BinaryTree::~BinaryTree()
{
    if(root_ != nullptr)
    {
        delete root_;
    }
}

void BinaryTree::setRoot(TreeNode * root)
{
    root_ = root;
}

TreeNode * BinaryTree::getRoot()
{
    return root_;
}

void BinaryTree::insert(int data) //need to add color later
{
    TreeNode * newNode = new TreeNode(data);
    root_ = insertNode(root_, newNode);

    //root_ -> setColor(black); //do at very end
}

TreeNode * BinaryTree::insertNode(TreeNode * root, TreeNode * newNode) //returning the actual node - the root itself
{
    //where does the diff between insert() come in?  think of subtrees! "root" isn't necessarily the root of the entire tree

    if(root == nullptr) //empty tree - the start
    {
        return newNode; //root == newNode; base case
    }
    else //has a root already, if data > node -> right subtree, data < node -> left; make process recursive
    {
        if(newNode -> getValue() < root -> getValue())
        {
            //left subtree
            root -> setLeftChild(insertNode(root -> getLeftChild(), newNode)); //where recursion comes in - don't need to write a loop for trees
            root -> getLeftChild() -> setParent(root); //sets parent as the root - think of subtrees in the long run
        }
        else
        {
            //right subtree
            root -> setRightChild(insertNode(root -> getRightChild(), newNode)); //where recursion comes in
            root -> getRightChild() -> setParent(root);
        }

        return root;
    }
}

//live, laugh, recursion
void BinaryTree::inorder(TreeNode * root)
{
    //base case; left, root, right
    if(root == nullptr)
    {
        return; //bc void, just going to print inorder
    }
    
    //print left subtree
    inorder(root -> getLeftChild());

    //print root
    std::cout<< root -> getValue() << " ";

    //print right subtree
    inorder(root -> getRightChild());

}

void BinaryTree::preorder(TreeNode * root) //root, left, right
{
    if(root == nullptr)
    {
        return; //bc void, just going to print inorder
    }
    
    //print root
    std::cout<< root -> getValue() << " ";

    //print left subtree
    preorder(root -> getLeftChild());

    //print right subtree
    preorder(root -> getRightChild());
}

//not needed for A5
// void BinaryTree::postorder(TreeNode * root) //left, right, root
// {
//     if(root == nullptr)
//     {
//         return; //bc void, just going to print inorder
//     }

//     //print left subtree
//     preorder(root -> getLeftChild());

//     //print right subtree
//     preorder(root -> getRightChild());

//     //print root
//     std::cout<< root -> getValue() << " ";
// }

// void BinaryTree::deleteElement(int data)
// {
//     root_ = deleteNode(root_, data);
// }

// TreeNode * BinaryTree::deleteNode(TreeNode * root, int data)
// {
//     if(root == nullptr) //base case of recursive call
//     {
//         return nullptr; 
//     }
//     else
//     {
//         if(root -> getValue() > data) //again - recursive - not necessarily root of whole tree; don't confuse with root_ (root of whole tree) - root is for subtree
//         {
//             //eft subtree
//             root -> setLeftChild(deleteNode(root -> getLeftChild(), data));
//         }
//         else if(root -> getValue() < data)
//         {
//             //right subtree
//             root -> setRightChild(deleteNode(root -> getLeftChild(), data));
//         }
//         else
//         {
//             //root of any subtree; place for 3 deletion rules
//             if(root -> getLeftChild() == nullptr && root -> getRightChild() == nullptr) //no children
//             {
//                 delete root;

//                 return nullptr; //nothing to point to at this point
//             }
//             else if(root -> getLeftChild() == nullptr)
//             {
//                 TreeNode * node = root -> getRightChild(); //inorder successor

//                 delete root;

//                 return node; //to delete, but still have connection
                
//             }
//             else if(root -> getRightChild() == nullptr)
//             {
//                 TreeNode * node = root -> getLeftChild();

//                 delete root;

//                 return node;
//             }
//             else
//             {
//                 TreeNode * node = root -> getRightChild();

//                 //now start dealing w left subtreee... how it's attached w the right child that's the root of the subtree

//                 while(node != nullptr && node -> getLeftChild() != nullptr) //for doing until finding endpoint
//                 {
//                     node = node -> getLeftChild(); //checking where we actually have a leaf node - here and overall
//                 }

//                 root -> setValue(nodde -> getValue());

//                 root -> setRightChild(deleteNode(root -> getRightChild(), node -> getValue())) //using recursion

//             }
//         }
//     }

//     return root;
// }