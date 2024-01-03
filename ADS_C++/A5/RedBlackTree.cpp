// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#include "RedBlackTree.h"
#include <iostream>

RedBlackTree::RedBlackTree() : BinaryTree() //inherits the root of the binary tree - needs the aspects of BT bc RBTrees are BT/BSTs!
{

}

RedBlackTree::~RedBlackTree()
{
    
}

void RedBlackTree::insert(int data) //remember to add balanceColor...
{
    TreeNode * newcolornode = new TreeNode(data);

    if(newcolornode -> getColor() == 0) //RED
    {
        BinaryTree::setRoot(BinaryTree::insertNode(BinaryTree::getRoot(), newcolornode)); //building tree again to make it so that inserts/children of black nodes start as red
        
        TreeNode * root = BinaryTree::getRoot();

        balanceColor(root, newcolornode);
    }
    //else black???

}

void RedBlackTree::balanceColor(TreeNode *& root, TreeNode *& newNode) //lots of stuff depends on this!!
{
    TreeNode * parentNode = newNode -> getParent(); //newNode from ^
    TreeNode * gparentNode = nullptr; //null bc leaf @ start
    TreeNode * auNode = nullptr; //null bc leaf @ start

    BinaryTree::getRoot() -> setColor(1); //to make sure that the root is always black

    if(newNode -> getParent() == nullptr) //if the parent is null, that means the root is in that position - the root of the whole tree is the only part whose parent is null
    {
        BinaryTree::setRoot(newNode);
        
        return; //class returns itself
    }

    if(parentNode -> getColor() == 1) //BLACK //if the parent of the newNode is black, don't need to set the color of the newNode, bc he default for insertion is red (0)
    {
        return;
    }

    if(parentNode -> getParent() == nullptr) //ORDER MATTERS! //like if the parent's parent is null, it's black (root?).. the gparentNode can't exist yet?
    {
        root = newNode -> getParent();

        root -> setColor(1); //BLACK

        return;
    }
    else //but if the parent's parent isn't null (the gparentNode isn't null), then gparentNode can exist
    {
        gparentNode = parentNode -> getParent();
    }

    
    //now have to account for auNode (auntuncleNode) behavior

    if(parentNode == gparentNode -> getRightChild()) //parent node is the right child of the gparent (like 18 gparent, 10 au, 22 parent?)
    {
        auNode = newNode -> getParent() -> getParent() -> getLeftChild(); //if a parent is the right child of a grandparent, the au should be inserted as the left child of the parent's parent (gparentNode)

        if(auNode != nullptr && auNode -> getColor() == 0) //if the auNode isn't null AND the auNode is inserted(?), then the parent is black, it's sister (auNode) is also black and their parent is red
        { // kind of like a second iteration...

            parentNode -> setColor(1);
            gparentNode -> setColor(0);
            auNode -> setColor(1);

            balanceColor(root, gparentNode); //bc like second iteration, gparentNode can actually exist - and so can auNode but we have to account for leftNode stuff through balancing the color
        }
        else //if(auNode != nullptr && auNode->getColor()==1) //aunt is BLACK, meaning there's another another iteration?
        {
            if(newNode == parentNode-> getRightChild()) //if a right child parent is inserted (meaning there's a gparent), 
            {
                rotateLeft(gparentNode, parentNode);

                parentNode -> setColor(1); //right child parentNode is black (like the same logic as auNode [left] but taking care of parent?) <- same below V

                gparentNode -> setColor(0);

            }
            else
            {
                rotateRight(parentNode, newNode);

                balanceColor(root, parentNode); //takes care of the rest of the tree - the beginning ^ takes care of subtrees
            }
        }
    }
    else if(parentNode == gparentNode -> getLeftChild()) //if there's not an auNode initally? - instead the parent is the left child
    {
        auNode = newNode -> getParent() -> getParent() -> getRightChild(); //if aunt happens to be on the right - no parent to pair with it? ** pretty sure this is like bottom subtree

        if(auNode != nullptr  && auNode -> getColor() == 0) //RED; if another auNode exists and..
        {
            parentNode -> setColor(1);

            gparentNode -> setColor(0);

            auNode -> setColor(1);

            balanceColor(root, gparentNode);
            
        }
        else //if(auNode != nullptr && auNode->getColor()==1) //if auNode is BLACK
        {
            if(newNode == parentNode -> getRightChild()) //if a parent is inserted as the right child...
            {
                rotateRight(parentNode, newNode);

                balanceColor(root, parentNode);
            }
            else
            {
                rotateLeft(gparentNode, parentNode);

                parentNode -> setColor(1); // parent is BLACK.. bc if auNode and parent on same level, balanced @ same color

                gparentNode -> setColor(0); //can't be same color as its child(ren) ^^^
            }
        }
    }
}

void RedBlackTree::rotateLeft(TreeNode *& root, TreeNode *& newNode) //root switch
{
    root -> setRightChild(newNode -> getLeftChild()); //root not root_ bc subtree!

    if(root -> getParent() == nullptr)
    {
        BinaryTree::setRoot(newNode);
    }
    else
    {
        if(root == root -> getParent() -> getLeftChild()) //if there root is a parent w/ a left child...
        {
            root -> getParent() -> setLeftChild(newNode);
            newNode -> setParent(root -> getParent()); //with the new node, you're setting the parent as the root, concerning left child
        }
        else
        {
            root -> getParent() -> setRightChild(newNode);
            newNode -> setParent(root -> getParent()); //with the new node, you're setting the parent as the root, concerning right child
        }
    }
    
    // root -> setLeftChild(root);
    // root -> setLeftChild(newNode); //sets left child to newNode (root).. like what 7 inserted did to 3

    root -> setGpa(newNode -> getParent());
    newNode -> setLeftChild(root); //like what I was trying to do on 156-157
    root -> setParent(newNode); //ˆˆˆ fixes memory leak from before! just needed to properly account for all parts...

}

void RedBlackTree::rotateRight(TreeNode *& root, TreeNode *& newNode)
{
    root -> setLeftChild(newNode -> getRightChild());

    if(root -> getParent() == nullptr)
    {
        BinaryTree::setRoot(newNode);
    }
    else
    {
        if(root == root -> getParent() -> getRightChild())
        {
            root -> getParent() -> setRightChild(newNode);
            newNode -> setParent(root -> getParent());
        }
        else
        {
            root -> getParent() -> setLeftChild(newNode);
            newNode -> setParent(root -> getParent());
        }
    }

    // root -> setRightChild(root);
    // root -> setLeftChild(newNode);

    root -> setGpa(newNode -> getParent());
    newNode -> setRightChild(root); //like what I was trying to do on 187-188
    root -> setParent(newNode); //ˆˆˆ fixes memory leak from before! just needed to properly account for all parts...
}

void RedBlackTree::printRedNodes(TreeNode * root)
{
    //inorder to search for red-colored TreeNodes

    if(root == nullptr)
    {
        return; //since referencing itself here... valid here V and on
    }

    printRedNodes(root -> getLeftChild()); //left child bc goes from left SUBTREE --> root --> right SUBTREE //can "start" @ bottom bc SUBTREE

    if(root -> getColor() == 0) //RED //if the root of the subtree is red... print out the data that's red //makes sense to have conditional bc root is SUBTREE not whole tree
    {
        std::cout<< root -> getValue() << " ";
    }
    
    printRedNodes(root -> getRightChild());

}

void RedBlackTree::printBlackNodes(TreeNode * root)
{
    //preorder to search for black-colored TreeNodes; ROOT --> LEFT SUBTREE --> RIGHT SUBTREE

    if(root == nullptr)
    {
        return;
    }

    if(root -> getColor() == 1) //BLACK
    {
        std::cout<< root -> getValue() << " "; //if the root of the subtree is black... print out the data that's black
    }

    printBlackNodes(root -> getLeftChild());
    printBlackNodes(root -> getRightChild());
}

