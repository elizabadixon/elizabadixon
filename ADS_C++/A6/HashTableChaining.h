// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#ifndef HASHTABLECHAINING_H
#define HASHTABLECHAINING_H

#include "HashTable.h"
#include "DoublyLinkedList.h"

class HashTableChaining : public HashTable
{
	public:
		HashTableChaining(int size);
		virtual ~HashTableChaining();
		virtual void insert(int key, int value);
		virtual int search(int key);
		virtual void remove(int key);
		virtual void print();

	private:
		HashTableChaining() {} //private constructor works to prevent default creation
		
		DoublyLinkedList * entry_;
		int size_;
};

#endif
