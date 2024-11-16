// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon

#include "StandardDeck.h"
#define DECK_SIZE 52

int main()
{
    StandardDeck * Deck = new StandardDeck(); //make the standard deck
    StandardDeck deck2;

    Deck -> initializeDeck();

    for(int i=1; i<=4; i++)
    {
        for(int d=1; d<=13; d++)
        {
            Card set(i,d);
            std::cout<< set.print() <<std::endl;
        }
    }   

    //Testing Outputs
    Card newCard = Card(1,1); 
    std::cout<< " " <<std::endl;
    std::cout<< "Is the deck empty? ";
    std::cout<< Deck -> isEmpty() <<std::endl;
    std::cout<< " " <<std::endl;
    std::cout<< "Number of Cards: " << Deck -> getNumCards() <<std::endl;
    std::cout<< " " <<std::endl;
    Deck -> shuffle(); 
    Deck -> displayCard(14); //make sure this is after shuffle() to actually show the shuffled cards!
    std::cout<< " " <<std::endl;
    std::cout<< "Can I add a card? ";;
    std::cout<< Deck -> addCard(newCard)<<std::endl; 
    std::cout<< " " <<std::endl;
    std::cout<< "Can I merge Decks? ";
    std::cout<< Deck -> mergeDecks(deck2, false)<<std::endl; 
    std::cout<< " " <<std::endl;
    std::cout<< "What card am I dealing? " <<  Deck -> dealCard().print() <<std::endl;
    std::cout<< " " <<std::endl;

    
    //handles memory leaks
    delete Deck;

    return 0;
}