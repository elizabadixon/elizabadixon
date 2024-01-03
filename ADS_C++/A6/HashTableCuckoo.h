// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#ifndef HASHTABLECUCKOO_H
#define HASHTABLECUCKOO_H

#include "HashTable.h"
#include "HashEntry.h"

class HashTableCuckoo : public HashTable
{
	public:
		HashTableCuckoo(int size);
        //HashTableCuckoo(const HashTableCuckoo & arr);
		~HashTableCuckoo();
		
        void insert(int key, int value);
		int search(int key);
		void remove(int key);
		void print();
		
        //getters and setters
        void setSize(int size);
        void setEntry1(HashEntry * entry1);
        void setEntry2(HashEntry * entry2);
        void setCycle(bool cycle);

		int getSize();
        HashEntry * getEntry1();
        HashEntry * getEntry2();
        bool getCycle();
		
	private:
		HashEntry * entry_;
		HashEntry * entry2_;
		int size_;
		bool cycle_;


};
#endif