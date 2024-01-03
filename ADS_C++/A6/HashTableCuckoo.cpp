// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "HashTableCuckoo.h"

HashTableCuckoo::HashTableCuckoo(int size) : HashTable(), size_(0)
{
	size_ = size;
	entry_ = new HashEntry[size_];
	entry2_ = new HashEntry[size_];
    //cycle_ = false;
	
	for(int i=0; i<size; i++)
	{
		entry_[i].setStatus(EMPTY);
		entry2_[i].setStatus(EMPTY);
	}
}

HashTableCuckoo::~HashTableCuckoo()
{
	delete [] entry_;
	delete [] entry2_;
}

void HashTableCuckoo::insert(int key, int value)
{
	int hash1 = key % size_;
    int hash2 = (key/size_) % size_;

    HashEntry newEntry(key, value);
    setCycle(true);

    if(entry_[hash1].getStatus() == EMPTY)
    {
        newEntry.setStatus(OCCUPIED);
        entry_[hash1] = newEntry;
    }
    else if(entry_[hash1].getStatus() == OCCUPIED)
    {
        if(entry2_[hash2].getStatus() == OCCUPIED)
        {
            setCycle(false);
            return;
        }
        else
        {
            HashEntry oldEntry(entry_[hash1].getKey(), entry_[hash1].getValue());
			entry_[hash1].setStatus(REMOVED);

            entry_[hash1] = newEntry;
			entry_[hash1].setStatus(OCCUPIED);

            int oldKey = oldEntry.getKey();
            hash2 = (oldKey/size_) % size_;

            entry2_[hash2] = oldEntry;
            entry2_[hash2].setStatus(OCCUPIED);

        }
    }
}

int HashTableCuckoo::search(int key)
{
    int hash1 = key % size_;
    int hash2 = (key/size_) % size_;

    if(entry_[hash1].getKey() == key)
    {
        return entry_[hash1].getValue();
    }
    else if(entry2_[hash2].getKey() == key)
    {
        return entry2_[hash2].getValue();
    }
    else
    {
        return -1;
    }

}  

void HashTableCuckoo::remove(int key)
{
	int hash1 = key % size_;
	int hash2 = (key/size_) % size_;
	if(entry_[hash1].getKey() == key)
	{
		entry_[hash1].setStatus(REMOVED);
		std::cout << "Key " << key << " removed." << std::endl;
	}
	else if(entry2_[hash2].getKey() == key)
	{
		entry2_[hash2].setStatus(REMOVED);
		std::cout << "Key " << key << " removed." << std::endl;
	}
	else
	{
		std::cout << "Invalid key! Key " << key << "not found in table!" << std::endl;
	}
}

void HashTableCuckoo::print()
{
	std::cout << "***********************************" << std::endl;
	for(int i = 0; i < size_; i++)
	{
		if(entry_[i].getStatus() != OCCUPIED)
		{
			std::cout << "[" << i << "]: " << std::endl;
		}
		else
		{
			std::cout << "[" << i << "]: " << entry_[i].getKey() << std::endl;
		}
	}
	std::cout << "***********************************" << std::endl;

	std::cout << "***********************************" << std::endl;
	for(int i = 0; i < size_; i++)
	{
		if(entry2_[i].getStatus() != OCCUPIED)
		{
			std::cout << "[" << i << "]: " << std::endl;
		}
		else
		{
			std::cout << "[" << i << "]: " << entry2_[i].getKey() << std::endl;
		}
	}
	std::cout << "***********************************" << std::endl;
}

void HashTableCuckoo::setSize(int size)
{
	size_ = size;
}

void HashTableCuckoo::setEntry1(HashEntry * entry1)
{
	entry_ = entry1;
}

void HashTableCuckoo::setEntry2(HashEntry * entry2)
{
	entry2_ = entry2;
}

void HashTableCuckoo::setCycle(bool cycle)
{
	cycle_ = cycle;
}

int HashTableCuckoo::getSize()
{
    return size_;
}

HashEntry * HashTableCuckoo::getEntry1()
{
	return entry_;
}

HashEntry * HashTableCuckoo::getEntry2()
{
	return entry2_;
}

bool HashTableCuckoo::getCycle()
{
	return cycle_;
}
