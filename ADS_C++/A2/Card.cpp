// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon
#include "Card.h"

std::string Card::SUIT[] = {"No Suit", "Spades", "Hearts", "Diamonds", "Clubs"};

std::string Card::FACE[] = {"Joker", "Ace", "Two", "Three", "Four", "Five", "Six",  
                       "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

Card::Card() //default constructor - CHECK GITHUB NOTES - this might be bad to leave blank
{  
    
}

Card::Card(int isuit, int iface)
{
    suitVal_ = isuit;
    faceVal_ = iface;
}

Card::~Card() //destructor
{

}

std::string Card::getSuit() //accessor methods
{
    return SUIT[suitVal_];
}

std::string Card::getFace()
{
    return FACE[faceVal_];
}

std::string Card::print()
{
    return (FACE[faceVal_] + " of " + SUIT[suitVal_]);   
}

void Card::initialize(int isuit, int iface)
{
    suitVal_ = isuit;
    faceVal_ = iface;
}  