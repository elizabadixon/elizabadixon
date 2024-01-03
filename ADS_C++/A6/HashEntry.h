// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#ifndef HASHENTRY_H
#define HASHENTRY_H
#include <iostream>

enum Status {EMPTY, OCCUPIED, REMOVED};

class HashEntry
{   
    public:
        HashEntry(int key, int value);
        HashEntry();
       
        /*virtual*/ ~HashEntry();
        
        //getters and setters
        int getKey(); //what data type? bc key is int - duh!
        int getValue();
        Status getStatus();
        void setKey(int key);
        void setValue(int value);
        void setStatus(Status status);

    private:
        int key_;
        int value_;
        Status status_; //enum; CHANGE TO BOOL maybe....

};
#endif