// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon

#include "Array.h"

#define DEFAULT_SIZE 100

//default constructor
Array::Array (void) : data_(new char [DEFAULT_SIZE]), cur_size_(DEFAULT_SIZE), max_size_(DEFAULT_SIZE) //Dr. R: This may be a better oportunity to use a pre-processor define here
																//       The reason why is that you use the integer literally many times
																//		 and by using a macro will allow you to define the value once and
																//	     use many times (e.g., variable).
                                                            //FIXED: defined a default size and changed initial values in the initialization list to the default size
                                                                   
{

    data_ = new char[max_size_];

}

//initializing constructor
//what makes a valid array length? -- non-negatives
Array::Array (size_t length) : data_(NULL), cur_size_(length), max_size_(DEFAULT_SIZE) // Dr. R: See comment above. 
{

    if(length < 0)
    {
		// Dr. R: We have a serious problem that is popping up here...you are setting data_ to NULL but it already is, 
		//		  that isn't the problem though, instead you have cur_size_ to be set to length but if length is say 0
		//		  we below will create an array of size 0...which is a problem! Instead, what you want here is to use max_size_
		//		  and the line below should be: max_size_ = DEFAULT_SIZE; (see above comment). Then below swap cur_size_ for max_size_.
        //
        //FIXED: See previous constructor's "fixed" comment - made max_size DEFAULT_SIZE... Plus made the changes indicated by this conditional's comment


        max_size_ = DEFAULT_SIZE;  

    }

    data_ = new char[max_size_];
   
}


Array::Array (size_t length, char fill) : data_(NULL), cur_size_(length), max_size_(DEFAULT_SIZE)
{
    if(length < 0)
    {
        max_size_ = DEFAULT_SIZE;
    }


    data_ = new char[max_size_];

    
    this -> fill(fill);

}

//copy constructor
Array::Array (const Array & array) : data_(new char[array.max_size_]), cur_size_(array.cur_size_), max_size_(array.max_size_)
{
    //deep copy - don't just set a pointer to a pointer -- iterate through data_ while pointing
    //could also fill out equality bc you don't have to do antyhing if they're equal

	// Dr. R: This is all good but we need to make sure we aren't trying to copy an Array that has a size of 0.
    //
    //FIXED: now with DEFAULT_SIZE utilized in previous constructors, the array copying a size of 0 has a check - also simplified this method to simply copy over indicated data...
    //...rather than having unnecessary conditionals

    for(int i=0; i<cur_size_; i++)
    {
        data_[i] = array.data_[i];
    }

}

//destructor
Array::~Array (void)
{
    //make sure data isn't null - else delete data
    if(data_ != NULL)
    {
        delete [] data_;
    }
}

//checks "greater" values - assigns each "side" equal to each other
const Array & Array::operator = (const Array & rhs)
{
    //check for self-assignment but if not, check size and if it can copy the data elements or not
    if(this != &rhs) // this != &rhs 
    {

        if(max_size_ < rhs.size()) //reallocate -- max_size_ < rhs.size() 
        {
			// Dr. R: Yes, we could call the resize method here.
            //FIXED: because of the below "variable =" changes made, resize isn't exactly necessary here -- used temp and DEFAULT_SIZE to allocate extra memory "padding" to avoid memory-related issues

            char * temp = new char [rhs.size() + DEFAULT_SIZE];

            cur_size_ = rhs.cur_size_;
            max_size_ = rhs.size() + DEFAULT_SIZE; //rhs size + default
            data_ = temp; //repoint to temp or swap -- then delete temp get rid of this line (old line)

            delete [] temp;

        }


        for(int i=0; i<cur_size_; i++) //actually copy over "operated on" data after assignment
        {
            data_[i] = rhs.data_[i];
        }

    }

    return *this;

}

//retrieves specified character at specified index
char & Array::operator [] (size_t index)
{
    
    if((index > this -> cur_size_) || (index < 0))
    {
        // Dr. R: Good!
        throw std::out_of_range("The specified index is out of the current range!");
    }
    else
    {
        return this -> data_[index];
    }      

}

//retrieves character at specified index -- what is returned is unmodifiable (save pointers, of course)
const char & Array::operator [] (size_t index) const
{
    if((index > this -> cur_size_) || (index < 0))
    {
        // Dr. R: Good!
        throw std::out_of_range("The specified index is out of the current range!");

    }
    else
    {
        return this -> data_[index];
    }        
    
}

//gets the character at the specified index
char Array::get (size_t index) const
{
    if((index > this -> cur_size_) || (index < 0))
    {
        // Dr. R: Good!
        throw std::out_of_range("The specified, gotten index is out of the current range!");

    }
    else
    {
        return this -> data_[index];
    }        
    
}

//sets the character at the specified index 
void Array::set (size_t index, char value)
{

    //if specified index is OOR, throw "std::out_of_range" exception
    if((index > this -> cur_size_) || (index < 0))
    {
        // Dr. R: Good!
        throw std::out_of_range("The specified, set index is out of the current range!");
    }
    else //but instead of getting, just setting the value
    {
        data_[index] = value;
    }

}

//sets a new size for the array
void Array::resize (size_t new_size)
{
    //if new_size == current size, nothing happens //need to make sure size is different for resizing
    //if new_size or smaller, don't really have to do anything...

    //copy all of the old elements into the new array w/ pointers - swap the data; when you resize, take new size and add
    //two arrays - one ultimately deleted to avoid memory leak

	// Dr. R: We shouldn't need a try-catch here as nothing should come back unexpected at this point. We can perform these checks here.
    //remember to think about what makes a size of an array valid...
    //
    //FIXED: got rid of try-catches, got rid of unnecessary conditionals

    if(new_size == this -> cur_size_)
    {
        return;
    }
    else if(new_size < this -> max_size_) //if new_size < current size, the array's size is set to the new, smaller size (truncated) 
    {

        cur_size_ = new_size;
        
        return;
    }
    else if(new_size > this -> max_size_) //if new_size > current size, the array's size is set to the new, larger size (expanded)
    {
        // Dr. R: Good!

        char * tempArr = new char[new_size]; //preserving "old" data while implementing new by swapping

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

//find the specified character in the array
int Array::find (char ch) const
{
    //code reuse opportunities... this one can call the other find below but with a start of 0
	// Dr. R: We need to catch the exception here and handle it...otherwise the user will be very confused.
    //wrap this in a try-catch for a character so that it catches it before it reaches the driver so the user isn't confused - they never specified a range
    //
    //FIXED: added try-catch plus and error throw for -1 (not finding the character)

    try
    {
        this -> find(ch, 0);
        
        if((this -> find(ch, 0) == -1))
        {
            throw std::out_of_range("Specified character not found in the array.");
        }

    }
    catch(const std::exception& OOR)
    {
        std::cerr << OOR.what() << '\n';
    }
    
    
    return this -> find(ch, 0); 

}

//different from above, allows user to specify a start index of the search
int Array::find (char ch, size_t start) const
{
    // Dr. R: In this case we do want to THROW it as the user should be made aware that they specified an invalid starting index.
    //
    //FIXED: set for loop i=start instead of i=0 to start at actual start value and not jsut check the entire array each time
    //
    //if the start index OOR, throw "std::out_of_range" exception
    if((start > this -> cur_size_) || (start < 0))
    {
        throw std::out_of_range("The specified starting point for the search is out of the current range!");
    }
    else
    {

        //search until you find the first instance of the character --> return the index of it
        for(int i=start; i < this -> cur_size_ ; i++)
        {
            if(ch == data_[i]) //if specified character is found, return the index of first occurrence
            {
                return i;
            }
        
        }

        return -1; //if the specified character !found, return -1
    } 

}

// //verify whether a side of an array is equal to another
bool Array::operator == (const Array & rhs) const //iterate through each element again //check self comparison (like a1=a1 true) //check size equivalency //if both the same, iterate and check
{
	// Dr. R: Good!
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


//verify when a side of an array is NOT equal to another
bool Array::operator != (const Array & rhs) const
{

    //if lhs != rhs: return true
    //if lhs == rhs: return false
	// Dr. R: Good!
    return !(this == &rhs);

}

//fill the array with character(s) to search
void Array::fill (char ch)
{
	// Dr. R: We will later talk about how we can use the Iterator pattern to handle this.
    for(int i=0; i<max_size_; i++)
    {
        data_[i] = ch;
    }
}