// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Curr_Array.h"

//
// Fixed_Array -- default constructor
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void) : Curr_Array<T>::Curr_Array(N)
{
    //necessary data in init list
}

//
// Fixed_Array -- copy constructor
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr) : Curr_Array<T>::Curr_Array(arr)
{

    for(int i=0; i<N; i++)
    {

        this -> set(i, arr[i]); //copy values based on initial array data over to be utilized

    }

}

//
// Fixed_Array -- static array-initializing constructor
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr) : Curr_Array<T>::Curr_Array(M)
{

    *this = arr; //initializes array with copied over data

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill) : Curr_Array<T>::Curr_Array(N, fill)
{

    //inherited fxnality from Curr_Array

}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N>
& rhs)
{

    if(this != &rhs) //if the sides aren't the "same", check for that
    {
        for(int i=0; i<N; i++) //N being the specified size of the array.
        {
            this -> set(i, rhs[i]);
        }

        return *this;
    }

}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{

    //other "side size" is under consideration now -- what other checks does the fixed array need to ensure that it's a fixed size?
    if(M > N)
    {
        for(int i=0; i<N; i++) //copying over appropriate data on the basis of the rhs, LHS
        {
            this -> set(i, rhs[i]);
        }

        return *this;
    }
    else
    {
        for(int i=0; i<M; i++) ///copying over appropriate data on the basis of the rhs, RHS
        {
            this -> set(i, rhs[i]);
        }

        return *this;
    }
    
}
