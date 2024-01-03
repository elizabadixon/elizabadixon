// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "HashEntry.h"

//can take from dicitonary.cpp???? not really...

HashEntry::HashEntry(int key, int value) //default
{
    key_ = key;
    value_ = value;
    status_ = EMPTY; //bc starts empty - not removed or occupied
}

HashEntry::HashEntry() //copy //kind of following HashTable.h - start position
{
    key_ = 0; //could just leave out VVV
    value_ = 0;
    status_ = EMPTY;
}

HashEntry::~HashEntry()
{

}


//getters and setters *************

int HashEntry::getKey()
{
    return key_;
}

int HashEntry::getValue()
{
    return value_;
}

Status HashEntry::getStatus()
{
    return status_;
}

void HashEntry::setKey(int key)
{
    key_ = key;
}

void HashEntry::setValue(int value)
{
    value_ = value;
}

void HashEntry::setStatus(Status status)
{
    status_ = status;
}