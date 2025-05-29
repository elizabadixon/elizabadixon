// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//eadixon

#include "Array.h"

//
// Stack -- default constructor
//
template <typename T>
Stack <T>::Stack (void) : array_(Array<T>()) 
{

    // if(array_.size() == DEFAULT_SIZE)
    // {
    //     array_.resize(array_.size() - DEFAULT_SIZE);
    // }
    // else
    // {
    //     return;
    // }

}

//
// Stack -- copy constructor
//
template <typename T>
Stack <T>::Stack (const Stack & s) : array_(Array<T>()) 
{

}

//
// push -- LI, add directly on top of most recently added ("last" added) stack element(s)
//
template <typename T>
void Stack <T>::push (T element)
{
    //like 0 + 1 w/ size of 1 being like there's 1 element in the stack
    array_.resize(array_.size() + 1);

    //BUT... we have to account for the element's array-like index
    array_[array_.size() - 1] = element;

}

//
// pop -- FO, remove topmost (most recently added) stack element
//
template <typename T>
void Stack <T>::pop (void)
{
    //let the user know if they're trying to remove something that cannot be removed
    if(is_empty() == true)
    {
        throw std::length_error("The stack is currently empty - unable to remove (pop) elements from the stack.");
    }
    else if(array_.size() == 1) //not just else{} bc that doesn't flag the proper fxnality to refer to the topmost value
    {
        return;
    }

    array_[array_.size() - 1] = 0; //indicating/setting the status so that the (most recently added) element is no longer in the stack

    array_.resize(array_.size() - 1); //resizing to account for popped off element

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{

    if(rhs.size() > array_.max_size())
    {
        array_.resize(rhs.size());   
    }

    array_ = rhs.array_;

    return *this;
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    if(is_empty() == true)
    {
        throw std::length_error("The stack is currently empty - unable to clear elements");
    }
    else
    {
        array_.resize(0);
    }

}