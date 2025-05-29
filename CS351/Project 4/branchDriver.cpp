#include "item.h"
#include "pq.h"

bool * bestset(nullptr);
bool * include(nullptr);

float bound(Item nodeU, int numItems, int capW, const Item * itemset);
int knapBranch(int numItems, const Item * itemset, int capW);

float bound(Item nodeU, int numItems, int capW, const Item * itemset)
{

    int j(0), k(0);
    int totalWeight(0);
    float result(0);

    if(nodeU.weight >= capW)
    {
        return 0;
    }
    else
    {

        result = nodeU.value;

        for(int x=0; x<numItems; x++)
        {
            bestset[x] = include[x];
        }

        j = nodeU.level+1;

        totalWeight = nodeU.weight;

        while( (j <= numItems) && (totalWeight + itemset[j].weight <= capW) )
        {
            totalWeight = totalWeight + itemset[j].weight;
            result = result + itemset[j].value;
            
            j++;
        }

        if(j < numItems)
        {
            result  = result + (capW - totalWeight) * itemset[j].ratio();
        }

        
        return result;

    }
}

int knapBranch(int numItems, const Item * itemset, int capW)
{

    pq<Item> PriorityQueue;
    Item nodeU, nodeV;

    for(int y=0; y<numItems; y++)
    {
        include[y] = false;
    }

    nodeV.level = -1; //lining up the root "index"
    nodeV.value = 0;
    nodeV.weight = 0;

    int maxProfit(0);

    PriorityQueue.enqueue(nodeV);
    include[nodeV.level] = true;

    while(!PriorityQueue.empty())
    {
        nodeV = PriorityQueue.dequeue();

        if(nodeV.level == -1)
        {
            nodeU.level = 0; //so that a child node is always one level number above the root/parent
        }
        if( nodeV.level == numItems-1 )
        {
            continue;
        }

        nodeU.level = nodeV.level + 1;
        include[nodeV.level] = true;
        //logic for profit/weight calculation based on parents + promising node storage
        nodeU.weight = nodeV.weight + itemset[nodeU.level].weight;
        nodeU.value = nodeV.value + itemset[nodeU.level].value;

        if( nodeU.weight <= capW && nodeU.value > maxProfit )
        {
            maxProfit = nodeU.value;
        }

        nodeU.bound = bound(nodeU, numItems, capW, itemset);

        if(nodeU.bound > maxProfit)
        {
            PriorityQueue.enqueue(nodeU);
            include[nodeV.level] = true;
        }

        nodeU.weight = nodeV.weight;
        nodeU.value = nodeV.value;
        nodeU.bound = bound(nodeU, numItems, capW, itemset);

        if(nodeU.bound > maxProfit)
        {
            PriorityQueue.enqueue(nodeU);
            include[nodeV.level] = true;
        }

    }

    //optimal knapsack printing
    int numKnapItems(0);
    int knapWeight(0);
    int knapProfit(0);

    cout<< "Number of item choices: " << numItems <<endl;
    cout<< "Knapsack capacity: " << capW <<endl;
    

    cout<< "Items in the optimally filled knapsack: " <<endl;

    for(int i=0; i<numItems; i++)
    {
        if(bestset[i] == true)
        {

            itemset[i].print();

            knapWeight += itemset[i].weight;
            knapProfit += itemset[i].value;

            numKnapItems++;

        }
    }

    cout<< "Number of items in the knapsack: " << numKnapItems <<endl;
    cout<< "Total weight of the items in the knapsack: " << knapWeight <<endl;
    cout<< "Total profit of the items in the knapsack: " << knapProfit <<endl; 


    return maxProfit;
}

int main()
{

    //general item variables referenced in Item
    string itemName;
    double value(0);
    double weight(0);
    double ratio(0);
    //knapsack-specific variables
    int profitsubi(0);
    int weightsubi(0);
    int capW(0);
    int numItems(0);
    int knapProfit(0);

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
    filenameOUT = "knapRun" + to_string(numItems) + ".txt";
    outfile.open(filenameOUT);

    infile >> numItems >> capW;
    cout << "numItems: " << numItems << " capacity: " << capW <<endl;

    //giving storage initial value
    Item * itemset = new Item[numItems+1];
    include = new bool[numItems];
    bestset = new bool[numItems];

    pq<Item> PriorityQueue;

    for(int a=0; a<numItems; a++)
    {
        infile >> itemName >> value >> weight;

        Item itemRef = Item(value, weight);
        itemRef.name = itemName;
        PriorityQueue.enqueue(itemRef);
        itemset[a] = itemRef;

        cout<< itemset[a].name << " " << itemset[a].value << " " << itemset[a].weight <<endl;

    }

    //PROBLEM AREA? **********
    for(int a=0; a<numItems-1; a++) //comparing ratios of items
    {
        for(int b=0; b<numItems-a-1; b++)
        {
            if( itemset[b].ratio() < itemset[b+1].ratio() )
            { 
                
                Item refItem = itemset[b];
                itemset[b] = itemset[b+1]; 
                itemset[b+1] = refItem;

            }
        }
    }

    knapProfit = knapBranch(numItems, itemset, capW);

    cout<< "Maximum profit of the final, optimal solution: " << knapProfit <<endl;

    infile.close();
    outfile.close();


    return 0;
}