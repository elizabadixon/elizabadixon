// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "HashTableChaining.h"


HashTableChaining::HashTableChaining(int size) : HashTable(), size_(0)
{
    if(size > 0)
    {
        entry_ = new DoublyLinkedList[size];

        for(int i=0; i<size; i++)
        {
            DoublyLinkedList newDLL;
            entry_[i] = newDLL;
        }

        size_ = size;

    }
    else
    {
        size_ = 10;
        entry_ = new DoublyLinkedList[size_];

        for(int i=0; i<size; i++)
        {
            DoublyLinkedList newDLL;

            entry_[i] = newDLL;

        }
    }
}

HashTableChaining::~HashTableChaining()
{
    delete [] entry_;
}

void HashTableChaining::insert(int key, int value)
{
    int hashValue = key % size_;
    
    HashEntry newEntry(key, value);
    
    LinkedNode * newLL = new LinkedNode(newEntry, nullptr, nullptr);

    if(entry_[hashValue].getHead() == nullptr)
    {
        entry_[hashValue].insert(value);
    }
    else
    {
        entry_[hashValue].insertLinkedNode(entry_[hashValue].getTail(), newEntry);
    }

    delete newLL;

    // newEntry.setStatus(OCCUPIED);

    
    
    // entry_[hashValue].insert(newEntry);

}

int HashTableChaining::search(int key)
{
    int searchValue = -1;

    int hashValue = key % size_;

    searchValue = entry_[hashValue].find(key);

    return searchValue;

}

void HashTableChaining::remove(int key)
{
    int searchValue = -1;

    int hashValue = key % size_;

    searchValue = entry_[hashValue].find(key);

    if(searchValue == -1)
    {
        std::cout<< "Invalid key! Key " << key << "not found in table!" <<std::endl;
        std::cout<< " " <<std::endl;
    }
    else 
    {
        entry_[hashValue].remove(key); //check fxn names

        std::cout<< "Key " << key << "has been removed." <<std::endl;
    }

}

void HashTableChaining::print()
{
    std::cout<<"****************************************"<<std::endl;
    for(int i=0; i<size_; i++)
    {
    
        std::cout<< "[ " << i << " ]:" <<std::endl;
        entry_[i].printList();
    }
    std::cout<<"****************************************"<<std::endl;
    std::cout<< " " <<std::endl;

}

