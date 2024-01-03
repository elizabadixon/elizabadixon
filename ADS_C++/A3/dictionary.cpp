#include "dictionary.h"

Dictionary::Dictionary():lookupTable_(new int [DICTIONARY_SIZE]) //makes instance of table array //default constructor
{
    //iterate through table array
    for(int i=0; i<DICTIONARY_SIZE; i++)
    {
        Set nums(1);
        char holder[1];
        holder[0] = i;
        nums.initialize(holder, 1);
        lookupTable_[i] = nums.getCardinality();
    }
}

Dictionary::Dictionary(const Dictionary & dict):lookupTable_(nullptr) //copy constructor
{
    if(dict.lookupTable_)
    {
        lookupTable_ = new int[DICTIONARY_SIZE];

        for(int i=0; i<DICTIONARY_SIZE; i++)
        {
            lookupTable_[i] = dict.lookupTable_[i];
        }
    }
}

Dictionary::~Dictionary() //destructor!
{
    if(lookupTable_ != nullptr)
	{
		delete [] lookupTable_; //gets rid of data that isn't needed
	}
}

void Dictionary::initialize(char * word, int size)
{
    data_.initialize(word, size);
}

int Dictionary::rank_range(int start, int end, int bit)
{
    int count = 0;
    //int type;

    // for(int i=start; i<end; i++)
    // {
    //     type = data_.get(i);
        
    //     if(type==bit)
    //     {
    //         count++;
    //     }
    //     else
    //     {

    //     }
    // }

    for(int i=start; i<end; i++)
    {
        //accounts for a bit being 1

        if(bit==1)
        {
            if(data_.get(i))
            {
                count++;
            }
        }
        else
        {
            //0s

            if(!data_.get(i))
            {
                count++;
            }
        }
    }

    return count;
}

int Dictionary::select_range(int start, int end, int k, int bit)
{
    //int bytePos = 0;
    int count = 0;
    //int type;

    for(int i=start; i<end; i++)
    {
        if(bit == 1)
        {
            if(data_.get(i))
            {
                count++;

                if(count == k)
                {
                    return i;
                }
            }
        }
        else
        {
            if(!data_.get(i))
            {
                count++;
                
                if(count == k)
                {
                    return i;
                }
            }
        }

        // if(bytePos <k)
        // {
        //     type = data_.get(i);

        //     if(type == bit)
        //     {
        //         count++;
        //         bytePos++;
        //     }
        //     else
        //     {
        //         count++;
        //     }
    
        // }
        // else
        // {
        //     return count;
        // }
    }

    return -1; 
}

int Dictionary::rank(int end, int bit)
{
    
    // int count=0;
	
	// int position=DICTIONARY_SIZE/BIT_IN_BYTE;
	
	// for(int i=0; i<position; i++)
	// {
	// 	int byte=data_.get8(i*BIT_IN_BYTE);
	// 	count=count+lookupTable_[byte];
	// }
	
	// int position2=DICTIONARY_SIZE%BIT_IN_BYTE;
    
	// if(position2!=(BIT_IN_BYTE-1))
	// {
	// 	count=count+rank_range((position*BIT_IN_BYTE),DICTIONARY_SIZE,bit);
	// }
	
	// return count;

    // int bytePos = 0;
    // end = (end/BIT_IN_BYTE) + 1; // add one to not round down

    // for(int i = 0; i < end; i++)
    // {
    //     bytePos;
    // }

    return rank_range(0, data_.length(), bit); //end of PHASE IV code segment
}

int Dictionary::select(int k, int bit)
{
    // int location=-1;
    // int count = 0;
    // int prevCount = 0;

    // for(int i; i<data_.bytes(); i++)
    // {
    //     int byte=data_.get8(i * BIT_IN_BYTE);
        
    //     count=count + lookupTable_[byte];
        
    //     if((count+prevCount)>=k)
    //     {
    //         return select_range((i * BIT_IN_BYTE), ((i + 1) * BIT_IN_BYTE), k-prevCount, bit);
    //     }
    //     else
    //     {
    //         prevCount = count;
    //     }
    // }

    // location = select_range(0, BIT_IN_BYTE, k,bit);
    
    // return location;    


    return select_range(0, data_.length(), k, bit); //PHASE IV code segment
}

void Dictionary::printLookupTable(std::ostream & output)
{
    std::cout << " " <<std::endl;
    std::cout<< "Printing Lookup Table..." <<std::endl;
    std::cout << " " <<std::endl;
    
    for(int i=0; i<DICTIONARY_SIZE; i++)
    {
        std::cout<< "lookupTable_[" << i << "] " << lookupTable_[i] <<std::endl; //output
        //std::cout<< "testing..." <<std::endl;
    }

    //std::cout<< "The lookup table is lookup tabling!" <<std::endl;
}