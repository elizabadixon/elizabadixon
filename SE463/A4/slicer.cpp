#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <bits/stdc++.h>
#include <algorithm>

int main()
{
    //file I/O
    std::string filenameIN;
    std::string filenameOUT;
    std::ifstream infile;
    std::ofstream outfile;

    //storing
    std::vector<int> infileLineNums;
    std::vector<std::string> sliceCode;
    std::string sliceTemp;

    std::vector<std::string> storeSlice;
    std::string storedSliceVal;

    //slice part variables
    std::string sliceVar;
    int sliceCount(0);
    
    std::cout<< " " <<std::endl;
    std::cout<< "Please enter the name of file you wish to slice: ";
    std::cin>> filenameIN;
    std::cout<< " " <<std::endl;

    std::cout<< "...Loading..." <<std::endl; //while the name of the file is not loaded...
    std::cout<< " " <<std::endl;

    std::cout<< "Please enter the variable on which you want to perform the slice: ";
    std::cin>> sliceVar;
    std::cout<< " " <<std::endl;

    std::cout<< "...Slicing..." <<std::endl; //while the program has not sliced the file yet
    std::cout<< " " <<std::endl;


    infile.open(filenameIN);

    if(infile.is_open())
    {
        
        while((getline(infile, sliceTemp)))
        {
            
            sliceTemp = infile.get();
            sliceCode.push_back(sliceTemp);
            std::cout<< "sliceCode read-in test: " << sliceTemp <<std::endl;
            std::cout<< "size of program: " <<sliceCode.size() <<std::endl;
            

            if((sliceTemp.find(sliceVar)))
            {
                sliceCount++;

                if((sliceCount > 0)) //> than 0 find
                {
                    std::cout<< "slice temp: " <<sliceTemp<<std::endl;
                    //std::cout<< "Does the 66 while get entered?" <<std::endl;
                    storeSlice.push_back(sliceVar);   
                    infileLineNums.push_back(sliceCount);

                    std::cout<< "lines of code : " <<std::endl;
                    std::cout<< sliceCount << " " << sliceVar <<std::endl;

                    // std::cout<< "stored slice value: " <<std::endl;
                    // for(int i=0; i<sliceCode.size(); i++)
                    // {
                    //     std::cout<< storeSlice[i] <<std::endl;
                    // }
                }
                
                
               
               //std::cout<< "sliceVar found in file!" << sliceTemp.find(sliceVar) <<std::endl;
               
            }

        }

        //makes sense that it's based on endpoint... but how do i get it to end properly?        

        infile.close();

    }

    
    for(int i=0; i<storeSlice.size(); i++)
    {
        std::cout<< infileLineNums[i] <<storeSlice[i]<<std::endl; 
        // std::cout<< "# LINE NUMS" << infileLineNums[i] <<std::endl; //store properly by putting infileLineNums into sliceCode vector?

    }

    std::cout<< "Final product of sliceCode size:" << sliceCode.size() <<std::endl;
    

    std::cout<< "this is outside the loops" <<std::endl;
    std::cout<< " " <<std::endl;

    std::cout<< "Please enter the name of the file you want to store your slice: ";
    std::cin>> filenameOUT;
    std::cout<< " " <<std::endl;
    
    outfile.open(filenameOUT);
    outfile << "S( " << sliceVar << " )" <<std::endl; //doesn't work properly bc of trying to get sliceVar slicing
    outfile <<std::endl;

    outfile.close();


    return 0;
}

