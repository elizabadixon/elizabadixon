//wzegarski
#include "bitarray.h"

BitArray::BitArray(int size)
{
	data_ = new char[BYTES]; //check if null - only one storing
	BYTES = size;
	LENGTH = BYTES * BIT_IN_BYTE; //BIT_IN_BYTE is kind of like position
}

BitArray::BitArray(const BitArray & array):LENGTH(array.LENGTH), BYTES(array.BYTES)//copy constructor //initalize BYTES and LENGTH
{
	data_ = new char[LENGTH/BYTES];
	//iterate through
	for(int i=0; i<LENGTH/BYTES; i++)
	{
		data_[i] = array.data_[i];
	}
}

BitArray::~BitArray()
{
	if(data_ != nullptr)
	{
		delete [] data_; //gets rid of data that isn't needed!!
	}
}

bool BitArray::get(int position) const
{
	int bitIndex = (position/BIT_IN_BYTE);
	position = position%BIT_IN_BYTE;

	if((data_[bitIndex] & (1 << ((BIT_IN_BYTE-1) - position))) !=0) //7 bc shifting with 1
	{
		return 1;
	}else
	{
		return 0;
	}
}

char BitArray::getBitMask(int position) const
{
	return (1<<((BIT_IN_BYTE - position % BIT_IN_BYTE) % BIT_IN_BYTE));
}

//
// void print()
//
void BitArray::print()
{	
	std::cout << "|";
	
	for (int i=0; i < BYTES; i++)
	{
		std::bitset<BIT_IN_BYTE> bits = data_[i];
		std::cout << bits << "|";
	}
	
	std::cout << std::endl;	
}

void BitArray::initialize(char * word, int size) //word meaning?? with *???
{
	BYTES = size;
	LENGTH = size * BIT_IN_BYTE;

	delete [] data_; //gets rid of old initialize if called again

	data_ = new char[size];

	for(int i=0; i<size; i++)
	{
		data_[i] = word[i];
	}
}

bool BitArray::flip(int position)
{
	int bitflipIndex = position/BIT_IN_BYTE;
	position = position%BIT_IN_BYTE;

	data_[bitflipIndex] ^= (1<<((BIT_IN_BYTE)-1)-position);

	return 1;
}

bool BitArray::set(int position, int bit) //important
{
	int bitflipIndex = position/BIT_IN_BYTE;
	position = position%BIT_IN_BYTE;

	if(bit==1)
	{
		data_[bitflipIndex] |= (1<<((BIT_IN_BYTE)-1)-position);
	}
	else
	{
		data_[bitflipIndex] &= ~(1<<((BIT_IN_BYTE)-1)-position);
	}

	return 1;

	// if(position < LENGTH)
	// {
	// 	//boolean Exclusive OR
	// 	if(!(get8(position) & getBitMask(position)) != !bit)
	// 	{
	// 		flip(position);
	// 		return true;
	// 	}
	// 	else
	// 	{
	// 		return false;
	// 	}
	// }else
	// {
	// 	return false;
	// }

}

char BitArray::get8(int position) const
{
	int bitflipIndex = (position)/BIT_IN_BYTE;
	return data_[bitflipIndex]; 
}

void BitArray::complement() //just stores complement of data
{
	for(int i=0; i<BYTES;i++)
	{
		data_[i] = ~data_[i];
	}
}

void BitArray::set8(char c, int index)
{
	data_[index] = c; //need int bitflipIndex??
}

void BitArray::clear()
{
	for(int i=0; i<BYTES;i++)
	{
		data_[i] = 0;
	}
}


