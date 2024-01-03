// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon
#include <fstream>
#include <iostream>
#include <string>
#include "Car.h"

int main()
{
    std::cout<<"***Welcome to the 2023 Indy 500 Race Simulator!***" <<std::endl;
    std::cout<<" "<<std::endl; 
    std::string n("");
    int s=0;
    int c=0;
    int i=1;
    int ln=0;
    int amount = 0;
    int lapTrack = 0;
    Car track[33];

    Car check;
    srand(time(0));
    //read in file
    std::ifstream inputFile("indy500.txt");
    if(inputFile.is_open())
    {
        
        while(!inputFile.eof())
        {
            inputFile>>n>>s>>c;
            check = Car(n,s,c,0);
            track[amount++] = check;
            //std::cout<<n<<" "<<s<<" "<<c<<std::endl;
        }
        
        inputFile.close();
    }
    else
    {
        std::cout << "unable to open file" << std::endl;
    }
    
    do
    {
        if(i>=33) //array positions
        {
            std::cout<<"***--->Racing..."<<std::endl;
            i=0;
        }
        
        ln = track[i].simulateRace();
        track[i].setLapNumber(ln);

    }while(track[i++].getLapNumber()<200);
    i--;

    std::cout<< " " <<std::endl;
    std::cout<< "\t" <<"*** "<< track[i].getName()<< " has won the 2023 Indianapolis 500! ***" ;
    std::cout<< " " <<std::endl;

    track[i].setLapNumber(200);

    std::cout<<" "<<std::endl;
    std::cout<<"Driver Name: Lap Number" <<std::endl;
    std::cout<<"********************************"<<std::endl;

    for(i=0; i<33; i++)
    {   
        std::cout<<track[i].getName() << ": " << track[i].getLapNumber() <<std::endl;   
    }

    std::cout<<" "<<std::endl;
    std::cout<< "Thank you for interacting with my Indy 500 Simulator!" <<std::endl;
    
    return 0;
}