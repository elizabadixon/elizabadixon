#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct Item
{ 
    string name;
	double value;
	double weight;
    int level; //bc the struct didn't initially have the node manipulation VV
    float bound;

    Item(); //default constructor init
    Item(double, double);	
	double ratio() const;
	void print() const;
	bool operator<(const Item & right) const;
    
};

Item::Item(double value_, double weight_)	
{

    value = value_;
    weight = weight_;

}

Item::Item()	
{

    name = " ";
    value = 0;
    weight = 0;
    bound = 0;
    level = 0;

}
	
double Item::ratio() const //value / weight
{ 
	return (value / weight);
}

void Item::print() const
{
	cout << name << " " << value << " " << weight << " " << ratio() <<endl;
}

// Compares one item's ratio to another 
//each item has a value and a weight - duh! total weight cannot exceed some max weight W (aka capacity); suppose n number of items;
// bool Item::operator<(const Item & right) const
// { 
//     // Fill this in here! 
//     double ratioPart1 = ratio();
//     double ratioPart2 = right.ratio();

//     return ratioPart1 < ratioPart2; 
// }

bool Item::operator<(const Item & right) const
{
    return bound < right.bound;
}