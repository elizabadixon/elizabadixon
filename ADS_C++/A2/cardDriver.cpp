// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon
#include "Card.h"
#include "StandardDeck.h"
#define DECK_SIZE 52

// int simulateWar(StandardDeck & hand1_, StandardDeck & hand2_, StandardDeck & battleground_);

// int simulateWar(StandardDeck & hand1_, StandardDeck & hand2_, StandardDeck & battleground_)
// {
//     //std::cout<<"the war is simulating!" <<std::endl;
    
//     int genWin = 0;
//     bool h1War = false;
//     bool h2War = false;

//     do
//     {
//         //std::cout<<"the war is simulating!" <<std::endl;
//         if(battleground_.getTopBattle()==hand1_.getTopHand()) //hand 1 war
//         {
//             //std::cout<<"the war is simulating!" <<std::endl;
//             h1War = true; //makes hand1_ go first
//             hand1_.printDeck();            

//             hand1_.mergeDecks(battleground_, 0);
//             hand1_.printDeck();

//             hand1_.shuffle();
//             hand1_.printDeck();
//             std::cout<<hand1_.getNumCards()<<std::endl;
//             std::cout<<hand2_.getNumCards()<<std::endl;
//             std::cout<<battleground_.getNumCards()<<std::endl;
//         }
//         else
//         {
//             battleground_.addCard(hand1_.dealCard());
//             if(hand1_.getNumCards()==0)
//             {
//                 break;
//             }
//         }

//         if(h1War==true)
//         {
//             battleground_.addCard(hand1_.dealCard()); //dealCard doesn't have parameters!; if dealing, no war at the moment
//             h1War = false;
//         }

//         if(battleground_.getTopBattle()==hand2_.getTopHand()) //hand 2 war
//         {
//             h2War = true;
//             hand2_.printDeck();

//             hand2_.mergeDecks(battleground_,0);
//             //hand2_.printDeck();

//             hand2_.shuffle();
//             //hand2_.printDeck();
//         }
//         else
//         {
//             battleground_.addCard(hand2_.dealCard());
//             if(hand2_.getNumCards()==0)
//             {
//                 break;
//             }
//         }

//         if(h2War == true)
//         {
//             battleground_.addCard(hand2_.dealCard());
//             h2War = false;
//         }

//     }while(!hand1_.isEmpty() && !hand2_.isEmpty()); //while both hands aren't empty

//     if(hand1_.getNumCards()>0)
//     {
//         genWin=1;
//     }
//     else if(hand2_.getNumCards()>0)
//     {
//         genWin=2;
//     }

//     return genWin;

// }

int main()
{
    StandardDeck * Deck = new StandardDeck();//make the standard deck

    StandardDeck deck2;
    //StandardDeck dealtCard;

    // StandardDeck * hand1_ = new StandardDeck();
    // StandardDeck * hand2_ = new StandardDeck();
    // StandardDeck * battleground_ = new StandardDeck();

    // int hand1Win_=0;
    // int hand2Win_=0;
    // int h1WinCount_ = 0;
    // int h2WinCount_ = 0;
    // int genWin = 0;
    // int h1Avg_ = 0;
    // int h2Avg_ = 0;

    Deck -> initializeDeck();

    //start of checking to get 50 times played
    // for(int i=0; i<50; i++)
    // {
    //     Deck -> shuffle();
    //     Deck -> halfDeck(*hand1_, *hand2_);
    //     int winStay = simulateWar(*hand1_, *hand2_, *battleground_);

    //     if(winStay==1)
    //     {
    //         h1WinCount_++;
    //     }else if(winStay==2)
    //     {
    //         h2WinCount_++;
    //     }else
    //     {
    //         std::cout<<"Both players win!" <<hand1Win_<<std::endl;
    //     }

    //     h1Avg_ = h1Avg_ + hand1_ ->getNumCards();
    //     h2Avg_ = h2Avg_ + hand2_ -> getNumCards();
    //     hand1_ -> emptyCards(*hand1_);
    //     hand2_ -> emptyCards(*hand2_);
    //     battleground_ -> emptyCards(*battleground_);

    // }

    // if(h1WinCount_>h2WinCount_)
    // {
    //     std::cout<<"Player 1 Wins!"<<std::endl;
    // }
    // else if(h2WinCount_ > h1WinCount_)
    // {
    //     std::cout<<"Player 2 Wins!";
    // }

    // std::cout<< "Player 1 average score: " <<h1Avg_/50<<std::endl;
    // std::cout<< "Player 2 average score: " <<h1Avg_/50<<std::endl;

    for(int i=1; i<=4; i++)
    {
        for(int d=1; d<=13; d++)
        {
            Card set(i,d);
            std::cout<< set.print() <<std::endl;
        }
    }   

    //checkers!
    Card newCard = Card(1,1); 
    //Card dealtCard = Card();
    std::cout<< "Is the deck empty? " <<std::endl;
    std::cout<< Deck -> isEmpty() <<std::endl;
    std::cout<< "Number of Cards: " <<std::endl;
    std::cout<< Deck -> getNumCards() <<std::endl;
    Deck -> shuffle(); 
    Deck -> displayCard(14); //make sure this is after shuffle() to actually show the shuffled cards!
    std::cout<< "Can I add a card? " <<std::endl;
    std::cout<< Deck -> addCard(newCard)<<std::endl; 
    std::cout<< "Can I merge Decks?" <<std::endl;
    std::cout<< Deck -> mergeDecks(deck2, false)<<std::endl; 
    std::cout<< "What card am I dealing?" <<std::endl;
    std::cout<< Deck -> dealCard().print()<<std::endl;
    
    //handles memory leaks
    delete Deck;
    // delete hand1_;
    // delete hand2_;
    // delete battleground_;

    return 0;
}