// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "HashTableArray.h"

//make sure to add linear and quadratic probing. 
//each time, for each fxn, do starting point, then else to iterate through data to account for each collision technique (if (method==LINEAR); else [for QUAD])

HashTableArray::HashTableArray(int size, Method method) : HashTable(), size_(0), method_(LINEAR)
{
    size_ = size;
    entry_ = new HashEntry[size]; //array!!
    method_ = method;

    for(int i=0; i<size; i++)
    {
        entry_[i].setStatus(EMPTY); //sets to empty to begin with
    }

    // if(size )
}

// HashTableArray::HashTableArray(const HashTableArray & arr)
// {
        // entry_ == arr.entry_;
// }

HashTableArray::~HashTableArray()
{
    if(entry_ != nullptr)
    {
        delete [] entry_;
    }
}

// int HashTableArray::getHashFxn(int key) *** I THINK THIS MAKES THINGS MORE COMPLICATED.....
// {
//     return (key % size_); //int key takes from getHashFxn
// }

void HashTableArray::insert(int key, int value)
{
    int hashValue = key % size_; //key not key_ bc takes from ^ parameters
    HashEntry newEntry(key, value); //will he take off if i use the stack too much...?

    newEntry.setStatus(OCCUPIED);

    //if no collision
    if(entry_[hashValue].getStatus() == EMPTY)
    {
        entry_[hashValue] = newEntry; //when making an entry, set status to occupied?
    }
    else //collision
    {
        for(int i=0; i<size_; i++)
        {
            int hashColl;
            if(method_ == LINEAR)
            {
                hashColl = (hashValue + i) % size_; //linear
            }
            else
            {
                hashColl = (hashValue + i*i) % size_; //quadratic
            }

            if(entry_[hashColl].getStatus() == EMPTY)
            {
                entry_[hashColl] = newEntry;

                break;
            }
        } 
    }  
}

int HashTableArray::search(int key)
{
    int hashValue = key % size_;

    if(method_ == LINEAR)
    {
        //no collision
        if(entry_[hashValue].getKey() == key && entry_[hashValue].getStatus() == OCCUPIED) //if linear is chosen, get key value and since entry is put in, status is occ
        {
            return entry_[hashValue].getValue(); //present the value
        }
        else //collision technique used: LINEAR
        {
            for(int i=0; i<size_; i++)
            {
                int hashColl = (hashValue + i) % size_;

                if(entry_[hashColl].getKey() == key && entry_[hashColl].getStatus() == OCCUPIED)
                {
                    return entry_[hashColl].getValue();
                }
            }
        }
    }
    else //QUADRATIC
    {
        if(entry_[hashValue].getKey() == key && entry_[hashValue].getStatus() == OCCUPIED) //even though getKey() returns key_, goes w parameters of search(int key)
        {
            return entry_[hashValue].getValue();
        }
        else
        {
            for(int i=0; i<size_; i++)
            {
                int hashColl = (hashValue + i*i) % size_;

                if(entry_[hashColl].getKey() == key && entry_[hashColl].getStatus() == OCCUPIED)
                {
                    return entry_[hashColl].getValue();
                }
            }
        }
    }

    return 0;
}

void HashTableArray::remove(int key)
{
    int hashValue = key % size_;

    if(method_ == LINEAR)
    {
        if(entry_[hashValue].getKey() == key) //initial
        {
            entry_[hashValue].setStatus(REMOVED); //bc remove(int key) - duh!!
            
            std::cout<< "Key " << key << " has been removed." <<std::endl;

        }
        else //collision
        {
            for(int i=0; i<size_; i++)
            {
                int hashColl = (hashValue + i) % size_;

                if(entry_[hashColl].getKey() == key && entry_[hashColl].getStatus() == OCCUPIED)
                {
                    entry_[hashColl].setStatus(REMOVED);
                    
                    std::cout<< "Key " << key << " has been removed." <<std::endl;
                    
                    return /*entry_[hashColl].getValue()*/; //could be just return...
                }
            }
            
            //if after a key has been removed, and another key is trying to enter hash table, it's invalid at this point..
            std::cout<< "Key entry is invalid! Can't find key " << key << " in this hash table." <<std::endl; 
            std::cout<< " " <<std::endl;
        }
    }
    else //QUADRATIC
    {
        if(entry_[hashValue].getKey() == key) //initial
        {
            entry_[hashValue].setStatus(REMOVED);

            std::cout<< "Key " << key << " has been removed." <<std::endl;

        }
        else //collision
        {
            for(int i=0; i<size_; i++)
            {
                int hashColl = (hashValue + i*i) % size_;

                if(entry_[hashColl].getKey() == key  && entry_[hashColl].getStatus() == OCCUPIED)
                {
                    entry_[hashColl].setStatus(REMOVED);
                    
                    std::cout<< "Key " << key << " has been removed." <<std::endl;

                    return; //?
                }
            }

            //if after a key has been removed, and another key is trying to enter hash table, it's invalid at this point..
            std::cout<< "Key entry is invalid! Can't find key " << key << " in this hash table." <<std::endl;
            std::cout<< " " <<std::endl;
        }
    }
}

void HashTableArray::print()
{
    std::cout<<"****************************************"<<std::endl;
    for(int i=0; i<size_; i++)
    {
        if(entry_[i].getStatus() != OCCUPIED)
        {
            std::cout<< "[" << i << "]:" <<std::endl; //text file #s will go after :, but it's EMPTY in this case
        }
        else
        {
            std::cout<< "[" << i << "]:" << entry_[i].getKey() <<std::endl; //OCCUPIED/REMOVED
        }
    }
    std::cout<<"****************************************"<<std::endl;
    std::cout<< " " <<std::endl;
}


//getters and setters *************

HashEntry * HashTableArray::getEntry()
{
    return entry_;
}

int HashTableArray::getSize()
{
    return size_;
}

Method HashTableArray::getMethod()
{
    return method_;
}

void HashTableArray::setEntry(HashEntry * entry)
{
    entry_ = entry;
}

void HashTableArray::setSize(int size)
{
    size_ = size;
}

void HashTableArray::setMethod(Method method)
{
    method_ = method;
}


