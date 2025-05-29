#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
        ...you should write a program that generates input files, so that you
        don’t have to keep writing new ones to test your program, and you can 
        see how well your eventual algorithm runs. This program should be able to take an input number n and W and generate a file following the above format. 
        
        For item names, I would recommend a, b, etc. For larger input files, you may instead revert to using numbers as the item names, such as 01123 and 01124, etc. 
        For weights, choose a random integer that ranges from 1 to 3n. Values have a decent range so that they are “interesting”.
            -i.e. randomizing the variables/inputs in THIS file!
    
        Run your program that builds text files for n (the *general/initial* number of items) being 10, 20, 100, 1000, and 10000.
            - like: 5 diff output files or "test file/run samples"
*/


int main()
{
    
    int numItems(0);
    int knapCap(0);
    int itemVal(0);
    int itemWeight(0);

    srand(time(NULL)); // declaration of random number seeder

    cout<< "Number of items in solution: ";
    cin>> numItems; //i.e. line 18 of the directions

    cout<< "Max capacity: ";
    cin>> knapCap;

    string filename = "greedyTest" + to_string(numItems) + ".txt";

    ofstream outputfile;
    outputfile.open(filename);
    outputfile << numItems << " " << knapCap << "\n";

    for(int i=0; i<numItems; i++)
    {
        if(numItems <= 26) //per the length of the alphabet
        {
            char itemNum;
            char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

            itemNum = alphabet[i];
            itemVal = rand()%176  + 25; //random values to append from 25 to 200
            itemWeight = rand()%(3*numItems) + 1; //random weights from 1 to 3*n

            outputfile << itemNum << " " << itemVal << " " << itemWeight <<endl;
        }
        else //for files w/ numItems larger than the length of the alphabet
        {
            int itemNum(0);
            itemNum = 1100 + (20 + i); // item number "label" that increments, starting at 1120
            itemVal = rand()%176  + 25; //random values to append from 25 to 200
            itemWeight = rand()%(3*numItems) + 1; //random weights from 1 to 3*n

            outputfile << itemNum << " " << itemVal << " " << itemWeight <<endl;
            
        }
    }

    outputfile.close();

    return 0;
};