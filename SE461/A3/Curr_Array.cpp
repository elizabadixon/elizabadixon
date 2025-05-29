// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//eadixon

#include "Curr_Array.h"
#include <stdexcept> // for std::out_of_bounds exception
#include <iostream>

#define DEFAULT_SIZE 100

//remember the references aren't by char anymore! think T-based, cur_size_-based

//
// Array
//
template <typename T>
Curr_Array<T>::Curr_Array(void) : data_(new T[cur_size_]), cur_size_(DEFAULT_SIZE)
{

}

//
// Curr_Array(size_t)
//
template <typename T>
Curr_Array<T>::Curr_Array(size_t length) : data_(new T[cur_size_]), cur_size_(length)
{

    if(length < 0)
    {

        cur_size_ = DEFAULT_SIZE;

    }

}

//
// Curr_Array(size_t, char)
//
template <typename T>
Curr_Array<T>::Curr_Array(size_t length, T fill) : data_(new T[DEFAULT_SIZE]), cur_size_(length)
{

    if(length < 0)
    {
        cur_size_ = DEFAULT_SIZE;
    }

    this -> fill(fill);

}

//
// Curr_Array(const Curr_Array&)
//
template <typename T>
Curr_Array<T>::Curr_Array(const Curr_Array& array) : data_(new T[array.cur_size_]), cur_size_(array.cur_size_)
{

    for(int i=0; i<cur_size_; i++)
    {
        data_[i] = array.data_[i];
    }

}

//
// ~Curr_Array
//
template <typename T>
Curr_Array<T>::~Curr_Array(void)
{

    if(data_ != NULL)
    {
        delete [] data_;
    }

}

//
// operator =
//
template <typename T>
const Curr_Array<T> & Curr_Array<T>::operator = (const Curr_Array& rhs)
{

    if(this != &rhs)
    {

        if(cur_size_ < rhs.size()) 
        {

            T * temp = new T[rhs.size() + DEFAULT_SIZE];

            cur_size_ = rhs.cur_size_;
            data_ = temp;

            delete [] temp;

        }


        for(int i=0; i<cur_size_; i++) //actually copy over "operated on" data after assignment
        {
            data_[i] = rhs.data_[i];
        }

    }

    return *this;

}

//
// operator []
//
template <typename T>
T & Curr_Array<T>::operator [] (size_t index)
{

    if((index > this -> cur_size_) || (index < 0))
    {
        throw std::out_of_range("The specified index is out of the current range!");
    }
    else
    {
        return this -> data_[index];
    }      

}

//
// operator []
//
template <typename T>
const T & Curr_Array<T>::operator [] (size_t index) const
{

    if((index > this -> cur_size_) || (index < 0))
    {
        throw std::out_of_range("The specified index is out of the current range!");

    }
    else
    {
        return this -> data_[index];
    }        

}

//
// get
//
template <typename T>
T Curr_Array<T>::get (size_t index) const
{

    if((index > this -> cur_size_) || (index < 0))
    {
        throw std::out_of_range("The specified, gotten index is out of the current range!");

    }
    else
    {
        return this -> data_[index];
    }        

}

//
// set
//
template <typename T>
void Curr_Array<T>::set (size_t index, T value)
{

    if((index > this -> cur_size_) || (index < 0))
    {
        throw std::out_of_range("The specified, set index is out of the current range!");
    }
    else
    {
        data_[index] = value;
    }

}

//
// find (char)
//
template <typename T>
int Curr_Array<T>::find (T value) const
{

    try
    {
        this -> find(value, 0);
        
        if((this -> find(value, 0) == -1))
        {
            throw std::out_of_range("Specified character not found in the array.");
        }

    }
    catch(const std::exception& OOR)
    {
        std::cerr << OOR.what() << '\n';
    }
    
    
    return this -> find(value, 0); 

}

//
// find (char, size_t)
//
template <typename T>
int Curr_Array<T>::find (T val, size_t start) const
{

    if((start > this -> cur_size_) || (start < 0))
    {
        throw std::out_of_range("The specified starting point for the search is out of the current range!");
    }
    else
    {

        //search until you find the first instance of the character --> RETURN THE INDEX of it
        for(int i=start; i < this -> cur_size_ ; i++)
        {
            if(val == data_[i]) //if specified character is found, return the index of first occurrence
            {
                return i;
            }
        
        }

        return -1; //if the specified character !found, return -1, "else" the index
    } 

}

//
// operator ==
//
template <typename T>
bool Curr_Array<T>::operator == (const Curr_Array& rhs) const
{

    if(this == &rhs) //if lhs == rhs: return true
    {
        return true;
    }
    else if(this != &rhs) //if lhs != rhs: return false
    {
        return false;
    }
    else
    {

        for(int i=0; i < this -> cur_size_; i++)
        {
            if(data_[i] != rhs.data_[i])
            {
                return false;
            }
        }

        return true; //if nothing ended up being false, then... needs a return

    }

}

//
// operator !=
//
template <typename T>
bool Curr_Array<T>::operator != (const Curr_Array& rhs) const
{

    return !(this == &rhs);

}

//
// fill
//
template <typename T>
void Curr_Array<T>::fill (T value)
{

    for(int i=0; i<cur_size_; i++)
    {
        data_[i] = value;
    }

}