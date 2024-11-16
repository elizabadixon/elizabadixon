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
        std::cout<< "The deck is empty." <<std::endl;
        return 1;
    }
    else
    {
        std::cout<< "The deck is not empty." <<std::endl;
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
        std::cout<< "Yes, you can add a card!" <<std::endl;
        deck_ [numCards_] = c;
        numCards_++;
        return 1;
    }
    else
    {
         std::cout<< "No, you can't add a card - the deck is full." <<std::endl;
        return 0;
    }
}

void StandardDeck::shuffle()
{
    srand(time(NULL));
    
    for(int i=0; i<3; i++)
    {
        for(int s=0; s<numCards_; s++)
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
        shuffle = 1;
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
        std::cout<< "Yes, you can merge decks." <<std::endl;
        return 1;
    }
    else
    {
        std::cout<< "No, you can't merge decks." <<std::endl;
        return 0; 
    }

    //return 0; //because the default for wanting to shuffle is false --> will be 1 if able to merge decks
}

void StandardDeck::initializeDeck() 
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
    return deck_[numCards_];
    numCards_--;
}