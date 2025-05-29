// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//eadixon

#include "Array.h"

//now data_ and other fxns are technically out of scope -- reference them using "this"

//
// Array
//
template <typename T>
Array <T>::Array (void) : Curr_Array<T>::Curr_Array(), max_size_(DEFAULT_SIZE)
{

    //avoid being redundant in constructors -- dind't need anything in the body here

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length) : Curr_Array<T>::Curr_Array(length), max_size_(DEFAULT_SIZE)
{

    if(length < 0)
    {
        max_size_ = DEFAULT_SIZE;
    }

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill) : Curr_Array<T>::Curr_Array(length, fill), max_size_(DEFAULT_SIZE)
{

    if(length < 0)
    {
        max_size_ = DEFAULT_SIZE;
    }

}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array) : Curr_Array<T>::Curr_Array(array), max_size_(array.max_size_)
{

    //inherited fxnality from Curr_Array -- just needed to add max_size_ stuff here

}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{

    if(this != &rhs) // this != &rhs 
    {

        if(max_size_ < rhs.size()) //reallocate -- max_size_ < rhs.size() 
        {

            T * temp = new T[rhs.size() + DEFAULT_SIZE];

            this -> cur_size_ = rhs.cur_size_;
            max_size_ = rhs.size() + DEFAULT_SIZE; //rhs size + default
            this -> data_ = temp; //repoint to temp or swap -- then delete temp get rid of this line (old line)

            delete [] temp;

        }


        for(int i=0; i<this->cur_size_; i++) //actually copy over "operated on" data after assignment
        {
            this -> data_[i] = rhs.data_[i];
        }

    }

    return *this;

}


//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{

    if(new_size == this -> cur_size_)
    {
        return;
    }
    else if(new_size < this -> max_size_)  
    {

        this -> cur_size_ = new_size;
        
        return;
    }
    else if(new_size > this -> max_size_) 
    {

        T * tempArr = new T[new_size];
        
        for(int i=0; i < this -> cur_size_; i++)
        {
            tempArr[i] = this -> data_[i];
        }

        std::swap(tempArr, this -> data_);

        this -> cur_size_ = new_size;
        this -> max_size_ = new_size;

        delete [] tempArr;

        return;

    }

}

// Dr. R: We can always remove this excess code to avoid clutter.
    
    //FIXED: Deleted unused blocks of code and noted when elements that may seem redundant were inheriting from Curr_Array w/ slight additions