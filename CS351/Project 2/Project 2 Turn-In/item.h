#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// You need to define the four functions listed below to use this function.
// You will not be able to use a priority queue without defining the operator function.

/*  has a value and a weight, read in in driver??
        goal is to maximize value w/o exceeding max weight
        avoid pitfalls by ratio-ing the value and weight
*/

struct Item // "struct" is just like "class" except that everything is public by default
{ 
	//remember that you can use these to reference this object!!
    string name;
	double value;
	double weight;

    Item(){}; //default constructor init
    ~Item(); //destructor init
    Item(double, double);	
	double ratio() const;
	void print() const;
	bool operator<(const Item &) const;
    
	
};

Item::~Item()
{

}

Item::Item(double value_, double weight_)	
{

    value = value_;
    weight = weight_;

}
	
double Item::ratio() const //value / weight
{ 
	return ((value) / (weight));
}

void Item::print() const
{
	cout << name << " " << value << " " << weight << " " << ratio() <<endl; //no numItems - don't want that to print-iterate with each line
}

// Compares one item's ratio to another 
//each item has a value and a weight - duh! total weight cannot exceed some max weight W (aka capacity); suppose n number of items;
bool Item::operator<(const Item & right) const
{ 
    // Fill this in here! 
    double ratioPart1 = ratio();
    double ratioPart2 = right.ratio();

    return ratioPart1 < ratioPart2; 
}