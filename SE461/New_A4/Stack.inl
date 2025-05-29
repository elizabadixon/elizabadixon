// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//eadixon

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{

    return array_.size();

}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{

    // Dr. R: We need to throw an empty exception here if the Stack is empty and we attempt to get the top.
        //FIXED: checked for emptiness, then returned a length_error to let the user know of the stack status

    //the top, recent item placement

    if(is_empty() == true)
    {
        throw std::length_error("The stack is empty -- cannot return a topmost value.");
    }
    else
    {
        return array_[array_.size() - 1];
    }

}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{

    if(array_.size() > 0)
    {
        std::cout<< "There are elements in the stack! NOT empty" <<std::endl;
        return false;
    }
    else
    {
        std::cout<< "Empty!" <<std::endl;
        return true;
    }

    return (array_.size() == 0);
    
}
