#include "item.h"
#include "pq.h"

int main()
{
   /* LOOSE PLAN
    
        1. Define all variables/instances of class and its comparison objects (w/ templates in mind)

        2. Declare file reading stuff

        3. read in file stuff w/ appropriate variables and enqueue array w/ priority queue object --> close reading

        4. BUT... when should you dequeue?
            * if an item's ratio isn't larger than other items' ratios  that already fit the sum guidelines (i.e. max weight)
            
            * maybe it's best to have the original enqueue from the original file reading present, dequeue in a loop, UNLESS --> enqueue
                - pertaining to the sum/total/max of w-sub-i being less than or equal to max weight
        
        5. Print Greedy Knapsack results

        6. File generation/management stuff

   */

    typedef pq<Item> PriorityQueue;
    typedef pq<Item> KnapsackQueue;

    PriorityQueue priQueue;
    KnapsackQueue knapQueue;

    //main variables to be read from the text file into the queue then printed (?)
    int numItems(0); //items in the queue to read in
    int knapCap(0); //capacity of the queue to read in
    string name;
    double value(0);
    double weight(0);

    //greedy-specifiic variables
    int numKnapItems(0); //greedy total number of items
    int knapValue(0); //greedy total value
    int W(0); //max/total weight


    //PQ test file read-in and enqueue
    ifstream testfile;
    testfile.open("projTest.txt");
    testfile >> numItems; // first line - basis of the logic
    testfile >> knapCap;

    Item pqArray[numItems]; //array of items for PQ that were read in

    for(int i=0; i<numItems; i++) //-------------------------------------
    {
        //now that we're in the loop, the other lines pertaining to the other variables can be read in properly
        
        testfile >> name >> value >> weight;

        pqArray[i].name = name; //cout<< pqArray[i].name <<endl;
        pqArray[i].value  = value;
        pqArray[i].weight = weight;

        priQueue.enqueue(pqArray[i]);

        
        //pqArray[i].print();
    }

    //priQueue.print();
    testfile.close();

    //"pitfall-less" greedy knapsack logic ---------------------------------
    Item initKnapArray[numItems];
    
    cout<< "init array -----------------" <<endl;
    for(int i=0; i<numItems; i++) //remember that the "greedy-specific" variables start at 0.. //considers all items by sorting them then enqueing them conditionally
    {   
        
        //dequeue, but the conditional makes it make sense
        initKnapArray[i] = priQueue.dequeue(); //pseudo-sorting the data //need equivalency to reference easier and appropriately calculate
        
        if(W + initKnapArray[i].weight <= knapCap) 
        {
            knapQueue.enqueue(initKnapArray[i]);

            knapValue = knapValue + initKnapArray[i].value;
            W = W + initKnapArray[i].weight;

            numKnapItems++;
        }
        
        initKnapArray[i].print();
        
    }

    string filename = "knapRun" + to_string(numItems) + ".txt"; //NOT numKnapItems
    ofstream outputfile;
    outputfile.open(filename);

    outputfile << numKnapItems <<"\n";
    outputfile << W <<"\n";
    outputfile << knapValue << "\n\n";
    outputfile << "Items in the greedy solution: " <<"\n";

    Item outKnapArray[numKnapItems];

    cout<< "out array -----------------" <<endl;
    for(int i=0; i<numKnapItems; i++)
    {
        outKnapArray[i] = knapQueue.dequeue();

        outputfile << outKnapArray[i].name << " " << outKnapArray[i].value << " " << outKnapArray[i].weight <<endl;
        
        outKnapArray[i].print();
    }

    //outputfile.close();

    return 0;
};