// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#ifndef HASHTABLEARRAY_H
#define HASHTABLEARRAY_H
#include <iostream>

#include "HashTable.h"
#include "HashEntry.h"

enum Method {LINEAR, QUADRATIC};

class HashTableArray : public HashTable//make sure to add linear and quadratic probing
{
    
    public:
        HashTableArray(int size, Method method); //default //remember that it's literally building an array - that's why size is a parameter
        HashTableArray(const HashTableArray & arr); 

        ~HashTableArray(); //destructor

        void insert(int key, int value);
        int search(int key);
        void remove(int key);
        void print();
        
        //getters and setters
        HashEntry * getEntry(); 
        void setEntry(HashEntry * entry);
        int getSize();
        Method getMethod();
        void setSize(int size);
        void setMethod(Method method);

    private:
        HashEntry * entry_;
        int size_;
        Method method_;
        //int getHashFxn(int key); UGHHH doesn't this complicate things????

};
#endif