//manipulates entire bit array rather than just single bits
#include "set.h"

Set::Set(int size):data_(BitArray(size))
{

}

Set::~Set()
{

}

void Set::initialize(char * word, int size)
{
    data_.initialize(word, size);
}

int Set::getCardinality() const //number of connections
{
    int cardinality = 0;
    int placeholder;

    for(int i=0; i<data_.length(); i++)
    {   
        placeholder = data_.get(i);

        if(placeholder == 1)
        {
            cardinality++;
        }
        else
        {

        }
    }

    return cardinality;
}

BitArray & Set::getData()
{
    return data_;
}

bool Set::setUnion(Set & B)
{
    if(data_.length() == B.getData().length())
    {
        //need two charatcers for comparison, unsigned
        unsigned char AA;
        unsigned char BB;

        for(int i=0; i<data_.bytes(); i++) //bytes() is that inline fxn
        {
            AA = data_.get8(i * BIT_IN_BYTE); //i bc you want the ith position of the bit array you're referencing
            BB = B.data_.get8(i * BIT_IN_BYTE); //i bc you want the ith position of the bit array you're referencing
            AA = AA | BB;
            data_.set8(AA, i);
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool Set::setIntersection(Set & B)
{
    if(data_.length() == B.getData().length())
    {
        //need two charatcers for comparison, unsigned
        unsigned char AA;
        unsigned char BB;

        for(int i=0; i<data_.bytes(); i++) //bytes() is that inline fxn
        {
            AA = data_.get8(i * BIT_IN_BYTE); //i bc you want the ith position of the bit array you're referencing
            BB = B.data_.get8(i * BIT_IN_BYTE); //i bc you want the ith position of the bit array you're referencing
            AA = AA & BB;
            data_.set8(AA, i);
        }
        
        return true;
    }
    else
    {
        return false;
    }
}

