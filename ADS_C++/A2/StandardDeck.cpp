// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon
#include "Card.h"
#include "StandardDeck.h"
#define DECK_SIZE 52

StandardDeck::StandardDeck() 
{
    deck_ = new Card[DECK_SIZE];
    numCards_ = 0;
}

// StandardDeck::StandardDeck()
// {

// }

StandardDeck::~StandardDeck() //bc putting in heap
{
    delete [] deck_;
}

bool StandardDeck::isEmpty()
{
    if(deck_ == nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int StandardDeck::getNumCards()
{
    return numCards_; 
}

void StandardDeck::displayCard(int i) 
{
    Card disp = deck_[i]; 
    std::cout<< (i + 1) << "th Card: " << disp.Card::print() << std::endl;
}

void StandardDeck::printDeck()
{
    for(int p=0; p<numCards_; p++) //DECK_SIZE
    {
        Card cardP = deck_[p];
        std::cout<< cardP.Card::getFace() + " of " + cardP.Card::getSuit() <<std::endl; 
    }
}

bool StandardDeck::addCard(Card c)
{
    if(numCards_ < 52)
    {
        deck_ [numCards_] = c;
        numCards_++;
        return 1;
    }
    else
    {
        return 0;
    }
}

void StandardDeck::shuffle()
{
    srand(time(NULL));
    
    for(int i=0;i<3;i++)
    {
        for(int s=0; s<numCards_;s++)
        {
            int randS = (rand() % numCards_-1)+1;
            Card randCard = deck_[randS];
            Card shuffdCard = deck_[s];
            deck_[randS] = shuffdCard;
            deck_[s] = randCard;
        }
    }
}

void StandardDeck::emptyCards(StandardDeck & newDeck)
{
    
    for(int e=0; e <numCards_; e++) //DECK_SIZE
    {
        newDeck.deck_[e] = Card(0,0);
        newDeck.numCards_=0;
    }
}

bool StandardDeck::mergeDecks(StandardDeck & newDeck, bool shuffle)
{
    int mergeCount = newDeck.getNumCards() + numCards_;
    int counter = 0;

    if(mergeCount <= numCards_) //DECK_SIZE
    {
        for(int m=0; m<newDeck.getNumCards(); m++)
        {
            deck_[m+numCards_] = newDeck.deck_[m];
            counter++;
        }
    }
    else
    {
        for(int z=0; z<numCards_; z++) //DECK_SIZE
        {
            deck_[z+numCards_] = newDeck.deck_[z];
            numCards_ = numCards_ - 1; //DECK_SIZE
        }
    }

    numCards_ = (numCards_ + counter) - 1;
    emptyCards(newDeck);

    if(shuffle == 1)
    {
        return 1;
    }
    else
    {
        return 1; 
    }

    return 0; //because the default for wanting to shuffle is false --> will be 1 if able to merge decks
}

void StandardDeck::initializeDeck() //now that this is done - how do i update default constructor accordingly??
{
    for(int s=1; s<5; s++) //counts for suits
    {
        for(int f=1; f<14; f++) //faces
        {
            Card newCard(s,f);
            deck_[numCards_++] = newCard;
        }
    }
}

Card StandardDeck::dealCard()
{
    // Card dealtCard = getTopCard();
    return deck_[numCards_];
    numCards_--;
}

// std::string StandardDeck::getTopBattle()
// {
//     Card topCardHand;
//     topCardHand = deck_[numCards_-1];
//     //std::cout<<topCardHand.print() << "Battle card top:" <<std::endl;
//     return topCardHand.getFace();
// }

// std::string StandardDeck::getTopHand()
// {
//     Card topCardBattle;
//     topCardBattle = deck_[numCards_];
//     //std::cout<<topCardBattle.print() << "Player Card top" <<std::endl;
//     return topCardBattle.getFace();
// }

// void StandardDeck::halfDeck(StandardDeck & hand1_, StandardDeck & hand2_)
// {
//     //could've used dealCard() ideas to return top and bottom parts of the deck??
//     for(int i=0; i<numCards_/2; i++)
//     {
//         hand1_.deck_[numCards_++];//=deck_[i]; //[i++]
//     } 

//     hand1_.numCards_=25; //=25
//     // std:cout<<hand1_.printDeck();

    
//     for(int i=numCards_/2; i<numCards_; i++)
//     {
//         hand2_.deck_[numCards_++];//=deck_[i]; //[i++]
//     }
//     //hand2_.printDeck();
//     hand2_.numCards_=25; //=25
// }
