// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

//
// size
//
template <typename T>
inline
size_t Queue <T>::size (void) const
{

    return array_.size();

}

//
// is_empty
//
template <typename T>
inline
bool Queue <T>::is_empty (void) const
{

    if(array_.size() > 0)
    {
        std::cout<< "There are elements in the queue! NOT empty" <<std::endl;
        return false;
    }
    else
    {
        std::cout<< "Empty!" <<std::endl;
        return true;
    }

    return (array_.size() == 0);
    
}

//
//head
//
template <typename T>
inline
T Queue <T>::head (void) const
{
    try
    {
        if(is_empty() == true)
        {
            throw std::length_error("The queue is empty -- cannot return a head element value.");   
        }
    }
    catch(...)
    {
        return array_[0];
    }

    return array_[0];

}

//
// tail
//
template <typename T>
inline
T Queue <T>::tail (void) const
{

    try
    {
        if(is_empty() == true)
        {
            throw std::length_error("The queue is empty -- cannot return a tail element value.");   
        }
    }
    catch(...)
    {

        return array_[0];
    }

    
    return array_[array_.size() - 1];

}