#include "item.h"

// ------------- BASIC ----------------

    //either contains item or not - if the subset A DOESN'T contain the item, A is optimal subset of the first (n-1) items

    /* If A DOES, A total profit of the items in A is equal to the profit of an item plus the optimal profit obtained when the items CAN be chosen from
        the first (n-1) items such that the total weight can't exceed W - weight of the item 
    */

    /* max profit equals matrix P[n][W], using values found previous to each position (in order); previous sequence is P[i][W] --> optimal profit for
        the first i items where the total weight cannot exceed w

        total number of entries is (numItems+1)*(capacity+1), but would increment based on table-building conditionals
    */

// ------------- REFINED ----------------

    /* no relationship between n and W --> don't need to consider every position --> only entries needed in the (n-1)st row are the ones needed to 
        compute P[n][W] (AKA P[n-1][W] and P[n-1][W-wsubn])
    */

   /* working backwards from n, determine which entries are needed via (once computed P[i][W]) P[i-1][w] and P[i-1][w-wsubi]; STOP when n=1 or w<=0;
      after determining the entries needed, compute starting with the first row

      total number of entries increments based on refined conditionals (similar to BASIC) - not doing EVERY entry
   */


//

//helper fxns

//returns the max value to help w the P[i][w] or P[n][W] equations
static int maxP(int valMax1, int valMax2)
{
    if(valMax1 >= valMax2)
    {
        return valMax1;
    }
    
    return valMax2;

}

int numMatrixEntries(0); //actually calculated matrix entries counter
int dynamicKnapRefined(int n, int W, Item * itemsubn, int ** P)
{
    
    if(n == 0 || W == 0)
    {
        
        return P[n][W] = 0;
    }
    else if(itemsubn[n-1].weight > W)
    {
        numMatrixEntries++;
        P[n][W] = dynamicKnapRefined(n-1, W, itemsubn, P);
        
        return P[n][W];
    }
    else //if(itemsubn[n].weight <= W)
    {
        numMatrixEntries++;
        P[n][W] = maxP((dynamicKnapRefined(n-1, W, itemsubn, P)), (dynamicKnapRefined(n-1, W-itemsubn[n-1].weight, itemsubn, P)) + itemsubn[n-1].value);

        return P[n][W];
    }
    
}

int main()
{

    //PHASE 1 - Basic Dynamic Program

    //file I/O declarations
    string filenameIN;
    string filenameOUT;
    ifstream infile;
    ofstream outfile;
    

    //general item variables referenced in Item
    string itemName;
    int numItems(0);
    double wItem(0);
    double vItem(0);
    double ratioItem(0);

    //knapsack technique-specific variables 
    int knapNumItems(0);
    int knapCap(0);
    int totalKnapValue(0);
    int totalKnapWeight(0);
    int notChosen(0);

    //starter file I/O
    string outfileName;
    cout<< "Please enter the name of the file you'd like to run: ";
    cin>> filenameIN;
    cout<< " " <<endl;
    infile.open(filenameIN);
    infile >> numItems >> knapCap;

    Item * itemsubn = new Item[numItems];
    Item * knapitems = new Item[numItems];

    //reading in each value/reference it properly to operate in a knapsack manner
    for(int i=0; i<numItems; i++)
    {
        //follow project format guidelines
        infile >> itemName >> vItem >> wItem;

        //reference/re-set values
        Item refItem = Item(vItem, wItem); 
        refItem.name  = itemName; //bc not already a parameter of Item, need to reference name
        ratioItem = refItem.ratio();
        itemsubn[i] = refItem;
        //cout<<"Does it get here?"<<endl;
        cout<< itemsubn[i].name << " " << itemsubn[i].value << " " << itemsubn[i].weight <<endl;   
            
    }

    int ** P = new int * [numItems + 1]; //matrix

    //build "table" P[i]V[w]> from the bottom-up
    for(int i=0; i<=numItems; i++) //<= NOT < numItems to bc have to consider wsubi <= w  to begin
    {
        // Item refItem = Item(vItem, wItem);
        // itemsubn[i] = refItem;
        P[i] = new int [knapCap + 1]; //so the bounds don't seg fault lol - takes all space into account; now numItems X knapCap, so reference knapCap

        for(int w=0; w<=knapCap; w++) //not based on numItems w/ the reassigned P[i]!!! based on capacity!!!
        {
            if( i==0 || w==0 )
            {
                //cout<<"Does it get here 1?"<<endl;
                P[i][w] = 0; //base case
            }
            else if(itemsubn[i-1].weight <= w)
            {
                //cout<<"Does it get here 2?"<<endl;
                P[i][w] = maxP(P[i-1][w], (P[i-1][w - ((int)itemsubn[i-1].weight)] + itemsubn[i-1].value)); //double invalid, so cast int
                //^^^ CAN be chosen from the first (n-1) items such that the total weight can't exceed W - weight of the item
            }
            else if(itemsubn[i-1].weight > w)
            {
                //cout<<"Does it get here 3?"<<endl;
                P[i][w] = P[i-1][w];
            }
        }
    }

    //considering matrix in terms of items not chosen AKA grouping the optimal solutions
    for(int i=numItems; i>0; i--) //if i and w from above are > 0...
    {
        if((P[i][knapCap-notChosen]) == (P[i-1][knapCap-notChosen]))
        {
            continue;
        }
    
        //incrementing for final result
        knapitems[knapNumItems] = itemsubn[i-1];
        totalKnapValue += knapitems[knapNumItems].value;
        totalKnapWeight += knapitems[knapNumItems].weight;
        notChosen += knapitems[knapNumItems++].weight;
    }    


    //testing
    /*

        cout<< "Total number of items in the dynamically optimized knapsack: " << knapNumItems <<endl;
        cout<< "Knapsack Capacity: " << knapCap <<endl;
        cout<< "Total weight of chosen knapsack items: " << totalKnapWeight <<endl;
        cout<< "Total value of chosen knapsack items: " << totalKnapValue <<endl;
        cout<< " " <<endl;
        cout<< "Items in the knapsack: " <<endl; 

        for(int i=0; i<knapNumItems; i++)
        {
            cout<< knapitems[i].name << " " << knapitems[i].value << " " << knapitems[i].weight <<endl; 
        }

    */

    /* //PHASE 2 - Report the BASIC items

    outfileName = "dynamKnapRun" + to_string(numItems) + ".txt";
    outfile.open(outfileName);    
    outfile << knapNumItems << "\n";
    outfile << totalKnapWeight << "\n";
    outfile << totalKnapValue << "\n";
    outfile << "\n" <<endl;
    outfile << "Items in the Solution:\n";
    for(int i=0; i<knapNumItems; i++)
    {
        outfile<< knapitems[i].name << " " << knapitems[i].value << " " << knapitems[i].weight << "\n"; 
    }


    infile.close();
    outfile.close();    

    */

   //PHASE 3 - Refined dynamic knapsack implementation

    //re-assign/declare new necessary values

    for(int i=0; i<(numItems+1); i++)
    {
        for(int w=0; w<(knapCap+1); w++)
        {
            P[i][w] = 0;
        }
    }

    Item * refined = new Item[numItems];

    dynamicKnapRefined(numItems, knapCap, itemsubn, P);
    knapNumItems=0;
    totalKnapValue=0;
    totalKnapWeight=0;
    notChosen=0;

    //store optimal solutions in the same way as before, but in the refined array
    for(int i=numItems; i>0; i--)
    {
        if((P[i][knapCap-notChosen]) == (P[i-1][knapCap-notChosen]))
        {
            continue;
        }

        refined[knapNumItems] = itemsubn[i-1];
        totalKnapValue += refined[knapNumItems].value;
        totalKnapWeight += refined[knapNumItems].weight;
        notChosen += refined[knapNumItems++].weight;        

    }
    
    //report refined items
    outfileName = "dynamKnapRun" + to_string(numItems) + ".txt";
    outfile.open(outfileName);    
    outfile << knapNumItems << "\n";
    outfile << totalKnapWeight << "\n";
    outfile << totalKnapValue << "\n\n";
    outfile<< "Number of (Refined) Matrix Entries Actually Calculated: " << numMatrixEntries << "\n\n";
    outfile << "Items in the Solution:\n";
    for(int i=0; i<knapNumItems; i++)
    {
        outfile<< refined[i].name << " " << refined[i].value << " " << refined[i].weight << "\n"; 
    }


    infile.close();
    outfile.close();    


    return 0;
}