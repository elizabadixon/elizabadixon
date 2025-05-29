// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Array.h"

// Dr. R: For convienence you may want to have Stack and Queue maintain their own sizes. 
    //MAYBE -- IF IT COMES UP

//
// Queue -- default constructor
//
template <typename T>
Queue <T>::Queue (void) : array_(Array<T>())
{
    // Dr. R: Need to initialize the head_ and tail_ too!
        //FIXED: initialized head and tail members as array_[0] -- the first index -- so they could be properly manipulated]

    if(array_.size() == DEFAULT_SIZE)
    {
        array_.resize(array_.size() - DEFAULT_SIZE);
    }
    else
    {
        return;
    }


    //both start at first index, but tail always grows for enqueue until dequeue --> head moves forward in order of the enqueueing, dequeueing from the head
    //the inline file takes care of the logic of their values when referenced in the driver as instance.head() or instance.tail()

    head_ = array_[0];
    tail_ = array_[0];


}

//
// Queue -- copy constructor
//
template <typename T>
Queue <T>::Queue (const Queue & q) : array_()
{

    // Dr. R: Need to copy the head_ and tail_ too!
        //FIXED: copied over head and tail members as array_[0]

    head_ = array_[0]; 
    tail_ = array_[0];

    array_ = q.array_; //referencing the Array's copy constructor fxnality

}

//
// queue -- FI, adds elements after the rest of the elements
//
template <typename T>
void Queue <T>::enqueue (T element)
{
    // Dr. R: Shouldn't we check to see if this is necessary?
        //FIXED: functionality this was referring to has since been deleted/changed

    array_.resize(array_.size() + 1); //resize to be one element larger, same as stack

    array_[array_.size() - 1] = element;

    tail_ = array_[array_.size()];

        // Dr. R: Need to update the tail_.
            //FIXED: tail_ will now be set to the index that extends to the size of the array_ -- AKA the end of the array

}


    // Dr. R: Dequeue should return an element of type T - not void.
        //FIXED: now type T -- no void involved in this method
//
// dequeue -- FO, removes the elements starting at the beginning of the list
//
template <typename T>
T Queue <T>::dequeue (T element)
{   

    try
    {
        //let the user know if they're trying to remove something that cannot be removed
        if(is_empty() == true)
        {
            throw std::length_error("The Queue is currently empty - unable to remove (dequeue) elements from the Queue.");  
        }
    
    }
    catch(...)
    {
        
        head_ = array_[0];
    }

    std::cout<< "outside of try-catch..." <<std::endl;

    
    // Dr. R: Everything below this comment should just be to get the head_ to return and then advance the head_ pointer.
        //FIXED: the below code makes sure that the head_ value is returned, as that is what is being dequeued - the loop "takes the value out", making the head the new first index

    if(array_.size() > 0)
    {

        for(int i=0; i<array_.size(); i++) //could be size - 1?
        {
            array_[i] = array_[i + 1];
        }

        array_.resize(array_.size() - 1); 
        
    }

    return head_; //the dequeued item

}

    // Dr. R: What about the head_ and tail_?
        //FIXED: ensures that the head_ and tail stay in their respective indexes, no matter the rhs 
//
// operator =
//
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{

    if(rhs.size() > array_.max_size)
    {
        array_.resize(rhs.size());   
    }

    //don't want to set the size to be smaller... if the rhs.size() is < array_.max_size_ than something else is wrong... plus we'd be unnecessarily deleting data

    array_ = rhs.array_;

    if(!is_empty())
    {
        head_ = array_[0];
        tail_ = array_[array_.size() - 1];
    }

    return *this;
}

//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
    
    array_.resize(0);

    for(int i = 0; i < (array_.size()) + 1; i++)
    {
        array_[i] = 0;
    }


    // Dr. R: Don't forget the head_ and tail_!
        //FIXED: the head and tail members are re-set to their initial first index values
    
    head_ = array_[0];
    tail_ = array_[0];

        
}