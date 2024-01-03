#include "bitarray.h"
#include "dictionary.h"
#include "set.h"
#include <cstring>
#include <fstream>
#include <iostream>

int main()
{
    BitArray newBit; //number of bytes
    //Set setbit;
    Dictionary dictBit;

    // std::cout<< "Number of Bits: ";
    // std::cout<< newBit.length() <<std::endl;
    // newBit.print();
    // std::cout<< newBit.get(1) <<std::endl; //phase 1 should be 0 always bc everything is "set" to 0 not anything else rn
    // std::cout << " " <<std::endl;

    // char test [] = "test";
    // newBit.initialize((test),4);
    // newBit.print();
    // std::cout << " " <<std::endl;

    // std::cout<< "0th Bit Set: " << newBit.get(0) << std::endl;
    // std::cout<< "10th Bit Set: " << newBit.get(10) << std::endl;
    // std::cout << " " <<std::endl;
    
    // std::cout<< "Setting 0th position to 1: " << newBit.flip(0) <<std::endl;
    // newBit.print();
    // std::cout << " " <<std::endl;
    // std::cout<< "Setting 10th position to 1: " << newBit.flip(10) <<std::endl;
    // newBit.print();
    // std::cout << " " <<std::endl;
    
    // std::cout<< "Complement: " <<std::endl;
    // newBit.complement();
    // newBit.print();
    // std::cout << " " <<std::endl;

    // newBit.clear();
    // newBit.print();

    //------------
    
    // char test [] = "test";
    // char ryan [] = "ryan";
    // newBit.initialize(test, 4); //half
    // (newBit.getData()).print();
    // setbit.initialize(ryan, 4);
    // (setbit.getData()).print();
    // std::cout << " " <<std::endl;

    // setbit.getCardinality();
    // std::cout<< "Cardinality: " << setbit.getCardinality() <<std::endl;
    // std::cout << " " <<std::endl;

    // std::cout<< "Set Union (A U B): " <<std::endl;
    // newBit.setUnion(setbit);
    // (newBit.getData()).print();
    // std::cout<< " " <<std::endl;

    
    // newBit.initialize(test, 4);
    // setbit.initialize(ryan, 4);
    // std::cout<< "Set Intersection (A X B):" <<std::endl;
    // newBit.setIntersection(setbit);
    // (newBit.getData()).print();
    // std::cout << " " <<std::endl;

    //------------

    char test [] = "test";
    char ryan [] = "ryan";
    
    std::ofstream file("lookup.txt");

    std::cout << " " <<std::endl;
    newBit.initialize(test,4);
    dictBit.initialize(ryan, 4); 
    newBit.print();
    std::cout << " " <<std::endl;

    //newBit.initialize(test, 4); 
    std::cout<< "Rank: " << dictBit.rank(31,1) <<std::endl;
    std::cout << " " <<std::endl;
    
    // // // //newBit.initialize(test, 4); 
    // std::cout << "Rank Range (15-31): " <<dictBit.rank_range(15,31,1) <<std::endl; //31 bc 32 spaces but in array form (and so on for other fxn's parameters)
    // std::cout << " " <<std::endl;

    // newBit.initialize(test,4);
    // dictBit.initialize(ryan, 4); 
    std::cout << "Select(5,1): " <<dictBit.select(5,1) <<std::endl;
    std::cout << " " <<std::endl;

    // // //newBit.initialize(test, 4); 
    // std::cout << "Select Range(0,15,2,1): " <<dictBit.select_range(0,15,2,1) <<std::endl;
    // std::cout << " " <<std::endl;

    //writes lookup table to file
    dictBit.printLookupTable(file);
    file.close();

    return 0;
}