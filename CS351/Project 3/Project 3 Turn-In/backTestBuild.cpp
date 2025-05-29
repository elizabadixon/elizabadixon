#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    
    int numItems(0);
    int knapCap(0);
    int itemVal(0);
    int itemWeight(0);

    srand(time(NULL)); // declaration of random number seeder

    cout<< "Number of items to operate on: ";
    cin>> numItems;

    cout<< "Max capacity: ";
    cin>> knapCap;

    string filename = "backTest" + to_string(numItems) + ".txt";

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