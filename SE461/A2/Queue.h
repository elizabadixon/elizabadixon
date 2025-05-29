// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <exception>
#include "Array.h"


/**
* @class Queue
*
* Basic queue for abitrary elements.
*/
template <typename T>
class Queue
{
public:
/// Type definition of the type.
    typedef T type;
    /**
    * @class empty_exception
    *
    * Exception thrown to indicate the queue is empty.
    */
    class empty_exception : public std::exception
    {
        public:
        /// Default constructor.
        empty_exception (void) : std::exception () { }

        /**
        * Initializing constructor.
        *
        * @param[in] msg Error message.
        */
        empty_exception (const char * msg) : std::exception (msg) { }
    };

    /// Default constructor.
    Queue (void);

    /// Copy constructor.
    Queue (const Queue & q);

    /**
    * Assignment operator
    *
    * @param[in] rhs Right-hand side of operator
    * @return Reference to self
    */
    const Queue & operator = (const Queue & rhs);

    /**
    * Add a new \a element onto the queue. The element is inserted
    * after all the other elements in the list.
    *
    * @param[in] element Element to add to the list
    */
    void enqueue (T element);


        // Dr. R: Should return an element T not a void.
            //FIXED: now type T -- nothing void involved in this method

    /**
    * Remove the oldest, "first" element from the queue.
    *
    * @exception empty_exception The queue is empty.
    */
    T dequeue (T element);

    /**
    * Test if the queue is empty
    *
    * @retval true The queue is empty
    * @retval false The queue is not empty
    */
    bool is_empty (void) const;

    /**
    * Number of elements on the queue.
    *
    * @return Size of the queue.
    */
    size_t size (void) const;

    /// Remove all elements from the queue.
    void clear (void);

    T head (void) const;
    T tail (void) const;


private:
    // add member variable here

    //Array instance to contain the queue fxnality
    Array<T> array_;

    T head_;
    T tail_;

};

// include the inline files
#include "Queue.inl"
// include the source file since template class
#include "Queue.cpp"
#endif // !defined _QUEUE_H_