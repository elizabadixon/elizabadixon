#include "item.h"
#include "pq.h"

//define the below variables GLOBALLY so that max profit can be produced and the set that has that profit can be determined
    int profitsubi(0);
    int weightsubi(0);
    int capW(0);
    int numItems(0);
    int maxProfit(0);
//declare null bc no memory for it to be applied to yet
    Item * itemset(nullptr); //numbset - the items included in the knapsack @ the end
    bool * bestset(nullptr);
    bool * include(nullptr);


bool promising(int i, int profitsubi, int weightsubi)
{
    int j(0), k(0);
    int totalWeight(0);
    float bound(0);

    if(weightsubi >= capW)
    {
        return false;
    }
    else
    {
        j = i + 1;

        bound = profitsubi;
        totalWeight = weightsubi;

        while( (j <= numItems) && (totalWeight + itemset[j].weight <= capW) )
        {
            totalWeight += itemset[j].weight;
            bound += itemset[j].value;

            cout<< "BOUND: " << bound <<endl;

            j++;
        }

        k = j;

        if(k <= numItems)
        {
            bound = ( ( bound + ( capW - totalWeight ) ) * ( itemset[k].ratio() ) );
        }

        return bound > maxProfit;

    }

}

void knapBack(int i, int profitsubi, int weightsubi)
{
    //to check for and set optimized/best solution
    if( (weightsubi <= capW) && (profitsubi > maxProfit))
    {
        maxProfit = profitsubi;

        for(int x=0; x<=numItems; x++)
        {
            bestset[x] = include[x];
        }

    }

    if(promising(i, profitsubi, weightsubi))
    {

        include[i] = true;
        knapBack( i+1, profitsubi + itemset[i+1].value, weightsubi + itemset[i+1].weight );
        include[i] = false;
        knapBack( i+1, profitsubi, weightsubi );

    }

}



int main()
{
    
    //general item variables referenced in Item
        string itemName;
        double value(0);
        double weight(0);
        double ratio(0);
        
    //file I/O declarations
        ifstream infile;
        string filenameIN;
        ofstream outfile;
        string filenameOUT;
    //starter file I/O
        cout << "Please enter the name of the file you'd like to run: ";
        cin >> filenameIN;
        cout << " " << endl;
        infile.open(filenameIN);
        infile >> numItems >> capW;
        cout << "numItems: " << numItems << " capacity: " << capW <<endl;

    //actually giving values to the null references, but after infile >> numItems >> capW; so that they can have value
        itemset = new Item [numItems+1];
        include = new bool [numItems];
        bestset = new bool [numItems];

    pq<Item> PriorityQueue;

    for(int y=0; y<numItems; y++)
    {
        infile >> itemName >> value >> weight;

        Item refItem = Item(value, weight);
        refItem.name = itemName;
        // refItem.value = value;
        // refItem.weight = weight;
        
        itemset[y] = refItem;

        cout<< itemset[y].name << " " << itemset[y].value << " " << itemset[y].weight <<endl;
        //cout<< refItem.name << " " << refItem.value << " " << refItem.weight <<endl;

        PriorityQueue.enqueue(refItem);

    }


    /*"Inputs: Positive integers n and W ; arrays w and p, each indexed from 1 to n, and each containing positive integers sorted in nonincreasing order 
    according to the values of p [i] /w [i]." (ratio) */
    for (int z=1; z<=numItems; z++)
    {
        itemset[z] = PriorityQueue.dequeue();
        //cout<< itemset[z].name << " " << itemset[z].value << " " << itemset[z].weight << itemset[z].ratio() <<endl;
    }

    knapBack(0,0,0);

    //final knapsack value variables
        int knapWeight(0);
        int knapValue(0);
        int numKnapItems(0);

    filenameOUT = "knapRun" + to_string(numItems) + ".txt";
    outfile.open(filenameOUT);

    outfile << "# of items to test: " << numItems <<endl;
    outfile << "Capacity of the knapsack: " << capW <<endl;

    outfile << "Optimal set of items in the knapsack: " <<endl;
    cout << "Optimal set of items in the knapsack: " <<endl;

    for(int a=0; a<numItems; a++)
    {

        if(bestset[a] == true)
        {
            //cout<< "INSIDE CONDITIONAL !!!" <<endl;

            outfile << itemset[a+1].name << " " << itemset[a+1].value << " " << itemset[a+1].weight <<endl;
            cout << itemset[a+1].name << " " << itemset[a+1].value << " " << itemset[a+1].weight <<endl;

            knapWeight += itemset[a+1].weight;
            knapValue += itemset[a+1].value;

            numKnapItems++;

        }

    }

    outfile << " " <<endl;
    outfile << "Final number of items in the knapsack: " << numKnapItems <<endl;
    cout<< "Final number of items in the knapsack: " << numKnapItems <<endl;
    outfile << "Total weight of the items in the knapsack: " << knapWeight <<endl;
    cout << "Total weight of the items in the knapsack: " << knapWeight <<endl;
    outfile << "Total value of the items in the knapsack: " << knapValue <<endl;
    cout << "Total value of the items in the knapsack: " << knapValue <<endl;



    infile.close();
    outfile.close();

    return 0;
}