// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon, wzegarski
#include "HashTableArray.h" //already includes HashTable.h and HashEntry.h - just remember to include sepchaining and cuckoo classes later
#include "HashTableChaining.h"
#include "HashTableCuckoo.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int hashMethod;
    void linearProbing();
    void quadraticProbing();
    void sepChaining();
    void cuckooHashing();

    while(hashMethod != 5)
    {
       std::cout<< " " <<std::endl;
       std::cout<< "-----------------------------------------------------" <<std::endl;
        std::cout<< "*** Welcome to Butler Blue IV's Can of Who Hash! ***" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<< "Below are your probing method options! V" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<< "1) Linear Probing" <<std::endl;
        std::cout<< "2) Quadratic Probing" <<std::endl;
        std::cout<< "3) Separate Chaining" <<std::endl;
        std::cout<< "4) Cuckoo Hashing" <<std::endl;
        std::cout<< "5) Quit Program" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<< "Please enter your choice: ";
        std::cin>> hashMethod;
        std::cout<< " " <<std::endl;

        if(hashMethod == 1)
        {
            linearProbing();
        }
        else if(hashMethod == 2)
        {
            quadraticProbing();
        }
        // else if(hashMethod == 3)
        // {
        //     sepChaining();
        // }
        else if(hashMethod == 4)
        {
            cuckooHashing();
        }
        else if(hashMethod == 5)
        {
            std::cout<< "You have quit. Thank you for using Blue IV's program - Goodbye!" <<std::endl;
            std::cout<< " " <<std::endl;
        }
        else
        {
            std::cout<< "Your choice is invalid. Please try again!" <<std::endl;
            std::cout<< " " <<std::endl;
        }
    }


    return 0;
}

void linearProbing()
{
    int tableSize;
    int selection;
    int key;
    int value;
    int count; //tracks line count of given file and compares it to the tableSize the user selected

    std::cout<< "Please enter the size of the Hash Table you wish to create: ";
    std::cin>> tableSize;
    std::cout<< " " <<std::endl;

    HashTableArray arr(tableSize, LINEAR); //is the arr syntax right? do i need to implement something else or is it invalid? //allows size of table array to be chosen

    std::ifstream file1;
    file1.open("hash.txt"); //honestly have no idea what file we're supposed to use... copy from assignment example(s)??

    while(!file1.eof())
    {
        count++;

        if(count >= tableSize)
        {
            std::cout<< "<<<--- Insufficient Hash Table Size! Re-hash! --->>>" <<std::endl;
            std::cout<< " " <<std::endl;
            
            file1.close();

            return; //ends so that action can be redone
        }

        file1 >> key;
        file1 >> value;
        arr.insert(key, value); //reads in values/content from file 1 - assuming key is initial
    }

    file1.close();
    arr.print(); //print what's inserted - (if looking at assignment, after "enter size", before other option set)

    while(selection != 4) //while not "quitting" or returning to main menu (NOT while not Cuckoo Hashing)
    {
        std::cout<< "1) Search For Entry" <<std::endl;
        std::cout<< "2) Remove Entry" <<std::endl;
        std::cout<< "3) Print Hash Table" <<std::endl;
        std::cout<< "4) Return To Main Menu" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<<"Please enter your choice: ";
        std::cin>> selection;
        std::cout<< " " <<std::endl;

        if(selection == 1)
        {
            std::cout<< "Search (Please enter a key): ";
            std::cin>> key;
            std::cout<< " " <<std::endl;

            value = arr.search(key);

            if(value != 0) //values can't be zero in a hash table - so this makes sure there aren't any undefined values being used thru the program
            {
                std::cout<< "Key: " << key << " Value: " << value <<std::endl;
                std::cout<< " " <<std::endl;
            }
            else
            {
                std::cout<< "Invalid key! Key " << key << " not found in table!" <<std::endl;
                std::cout<< " " <<std::endl;
            }
        }
        else if(selection == 2)
        {
            std::cout<< "Remove (Please enter a key): ";
            std::cin>> key;
            std::cout <<std::endl;

            arr.remove(key);
        }
        else if(selection == 3)
        {
            arr.print();
            std::cout<< " " <<std::endl;
            std::cout<< "Table has been printed." <<std::endl;
            std::cout<< " " <<std::endl;
        }
        else if(selection == 4) //still include, user has option to stop the process
        {



        }
        else
        {
            std::cout<< "Invalid selection! Please try again." <<std::endl;
            std::cout<< " " <<std::endl;
        }
    }
}

void quadraticProbing()
{
    int tableSize;
    int selection;
    int key;
    int value;
    int count; //tracks line count of given file and compares it to the tableSize the user selected

    std::cout<< "Please enter the size of the Hash Table you wish to create: ";
    std::cin>> tableSize;
    std::cout<< " " <<std::endl;

    HashTableArray arr(tableSize, QUADRATIC); //is the arr syntax right? do i need to implement something else or is it invalid? //allows size of table array to be chosen

    std::ifstream file1;
    file1.open("hash.txt"); //honestly have no idea what file we're supposed to use... copy from assignment example(s)??

    while(!file1.eof())
    {
        count++;

        if(count >= tableSize)
        {
            std::cout<< "<<<--- Insufficient Hash Table Size! Re-hash! --->>>" <<std::endl;
            std::cout<< " " <<std::endl;
            
            file1.close();

            return; //ends so that action can be redone
        }

        file1 >> key;
        file1 >> value;
        arr.insert(key, value); //reads in values/content from file 1 - assuming key is initial
    }

    file1.close();
    arr.print(); //print what's inserted - (if looking at assignment, after "enter size", before other option set)

    while(selection != 4) //while not "quitting" or returning to main menu (NOT while not Cuckoo Hashing)
    {
        std::cout<< "1) Search For Entry" <<std::endl;
        std::cout<< "2) Remove Entry" <<std::endl;
        std::cout<< "3) Print Hash Table" <<std::endl;
        std::cout<< "4) Return To Main Menu" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<<"Please enter your choice: ";
        std::cin>> selection;
        std::cout<< " " <<std::endl;

        if(selection == 1)
        {
            std::cout<< "Search (Please enter a key): ";
            std::cin>> key;
            std::cout<< " " <<std::endl;

            value = arr.search(key);

            if(value != 0) //values can't be zero in a hash table - so this makes sure there aren't any undefined values being used thru the program
            {
                std::cout<< "Key: " << key << " Value: " << value <<std::endl;
                std::cout<< " " <<std::endl;
            }
            else
            {
                std::cout<< "Invalid key! Key " << key << " not found in table!" <<std::endl;
                std::cout<< " " <<std::endl;
            }
        }
        else if(selection == 2)
        {
            std::cout<< "Remove (Please enter a key): ";
            std::cin>> key;
            std::cout <<std::endl;

            arr.remove(key);
        }
        else if(selection == 3)
        {
            arr.print();
            std::cout<< " " <<std::endl;
            std::cout<< "Table has been printed." <<std::endl;
            std::cout<< " " <<std::endl;
        }
        else if(selection == 4) //still include, user has option to stop the process
        {



        }
        else
        {
            std::cout<< "Invalid selection! Please try again." <<std::endl;
            std::cout<< " " <<std::endl;
        }
    }
}

void sepChaining()
{
    int tableSize;
    int selection;
    int key;
    int value;
    int count; //tracks line count of given file and compares it to the tableSize the user selected

    std::cout<< "Please enter the size of the Hash Table you wish to create: ";
    std::cin>> tableSize;
    std::cout<< " " <<std::endl;

    HashTableArray arr(tableSize, QUADRATIC); //is the arr syntax right? do i need to implement something else or is it invalid? //allows size of table array to be chosen

    std::ifstream file1;
    file1.open("hash.txt"); //honestly have no idea what file we're supposed to use... copy from assignment example(s)??

    while(!file1.eof())
    {
        count++;

        if(count >= tableSize)
        {
            std::cout<< "<<<--- Insufficient Hash Table Size! Re-hash! --->>>" <<std::endl;
            std::cout<< " " <<std::endl;
            
            file1.close();

            return; //ends so that action can be redone
        }

        file1 >> key;
        file1 >> value;
        arr.insert(key, value); //reads in values/content from file 1 - assuming key is initial
    }

    file1.close();
    arr.print(); //print what's inserted - (if looking at assignment, after "enter size", before other option set)

    while(selection != 4) //while not "quitting" or returning to main menu (NOT while not Cuckoo Hashing)
    {
        std::cout<< "1) Search For Entry" <<std::endl;
        std::cout<< "2) Remove Entry" <<std::endl;
        std::cout<< "3) Print Hash Table" <<std::endl;
        std::cout<< "4) Return To Main Menu" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<<"Please enter your choice: ";
        std::cin>> selection;
        std::cout<< " " <<std::endl;

        if(selection == 1)
        {
            std::cout<< "Search (Please enter a key): ";
            std::cin>> key;
            std::cout<< " " <<std::endl;

            value = arr.search(key);

            if(value != 0) //values can't be zero in a hash table - so this makes sure there aren't any undefined values being used thru the program
            {
                std::cout<< "Key: " << key << " Value: " << value <<std::endl;
                std::cout<< " " <<std::endl;
            }
            else
            {
                std::cout<< "Invalid key! Key " << key << " not found in table!" <<std::endl;
                std::cout<< " " <<std::endl;
            }
        }
        else if(selection == 2)
        {
            std::cout<< "Remove (Please enter a key): ";
            std::cin>> key;
            std::cout <<std::endl;

            arr.remove(key);
        }
        else if(selection == 3)
        {
            arr.print();
            std::cout<< " " <<std::endl;
            std::cout<< "Table has been printed." <<std::endl;
            std::cout<< " " <<std::endl;
        }
        else if(selection == 4) //still include, user has option to stop the process
        {



        }
        else
        {
            std::cout<< "Invalid selection! Please try again." <<std::endl;
            std::cout<< " " <<std::endl;
        }
    }
}

void cuckooHashing()
{
    int tableSize;
    int selection;
    int key;
    int value;
    int count; //tracks line count of given file and compares it to the tableSize the user selected

    std::cout<< "Please enter the size of the Hash Table you wish to create: ";
    std::cin>> tableSize;
    std::cout<< " " <<std::endl;

    HashTableCuckoo arr(tableSize); //is the arr syntax right? do i need to implement something else or is it invalid? //allows size of table array to be chosen

    std::ifstream file1;
    file1.open("cycle.txt"); //honestly have no idea what file we're supposed to use... copy from assignment example(s)??

    while(!file1.eof())
    {
        count++;

        if(count >= tableSize)
        {
            if(arr.getCycle())
            {
                std::cout<<"Cycle Present - Rehash!"<<std::endl;
            }
            
            std::cout<< "<<<--- Insufficient Hash Table Size! Re-hash! --->>>" <<std::endl;
            std::cout<< " " <<std::endl;
            
            file1.close();

            return; //ends so that action can be redone
        }

        file1 >> key;
        file1 >> value;
        arr.insert(key, value); //reads in values/content from file 1 - assuming key is initial
    }

    file1.close();
    arr.print(); //print what's inserted - (if looking at assignment, after "enter size", before other option set)

    while(selection != 4) //while not "quitting" or returning to main menu (NOT while not Cuckoo Hashing)
    {
        std::cout<< "1) Search For Entry" <<std::endl;
        std::cout<< "2) Remove Entry" <<std::endl;
        std::cout<< "3) Print Hash Table" <<std::endl;
        std::cout<< "4) Return To Main Menu" <<std::endl;
        std::cout<< " " <<std::endl;

        std::cout<<"Please enter your choice: ";
        std::cin>> selection;
        std::cout<< " " <<std::endl;

        if(selection == 1)
        {
            std::cout<< "Search (Please enter a key): ";
            std::cin>> key;
            std::cout<< " " <<std::endl;

            value = arr.search(key);

            if(value != 0) //values can't be zero in a hash table - so this makes sure there aren't any undefined values being used thru the program
            {
                std::cout<< "Key: " << key << " Value: " << value <<std::endl;
                std::cout<< " " <<std::endl;
            }
            else
            {
                std::cout<< "Invalid key! Key " << key << " not found in table!" <<std::endl;
                std::cout<< " " <<std::endl;
            }
        }
        else if(selection == 2)
        {
            std::cout<< "Remove (Please enter a key): ";
            std::cin>> key;
            std::cout <<std::endl;

            arr.remove(key);
        }
        else if(selection == 3)
        {
            arr.print();
            std::cout<< " " <<std::endl;
            std::cout<< "Table has been printed." <<std::endl;
            std::cout<< " " <<std::endl;
        }
        else if(selection == 4) //still include, user has option to stop the process
        {



        }
        else
        {
            std::cout<< "Invalid selection! Please try again." <<std::endl;
            std::cout<< " " <<std::endl;
        }
    }
}
