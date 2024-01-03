// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski

#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node(int val);
        ~Node() {};
        void setValue(int val);
        int getValue();

    protected:
        Node() {};

    private:
        int data_;
        
};

#endif