#include <bitset> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
//#include <math.h>
#include <cmath>

void IPCalculator(const std::string& ipAddr, const std::string& netmask)
{

    //IP FORMATTING
    std::vector<int> ipElements_; 
    std::istringstream ipstream(ipAddr); 
    std::string ipSection_; //try to do int stuff?
  
    while(getline(ipstream, ipSection_, '.')) 
    { 
        
        ipElements_.push_back(stoi(ipSection_)); 

    } 
  
    //CIDR/MASKING FORMAT
    std::vector<int> maskElements_; 
    std::istringstream maskstream(netmask); 
    std::string maskSection_;  //try to do int stuff?
    
    while(getline(maskstream, maskSection_, '.'))
    { 

        maskElements_.push_back(stoi(maskSection_)); 

    } 
   

    //NETWORK ADDRESS CALCULATING bitwise
    std::vector<int> networkAddr_; 

    for(size_t i=0; i<ipElements_.size(); i++) 
    { 

        networkAddr_.push_back(ipElements_[i] & maskElements_[i]); 

    } 

    //BROADCAST ADDRESS CALCULATING bitwise
    std::vector<int> broadcastAddr_; 

    for (size_t i=0; i<ipElements_.size(); i++) 
    { 

        broadcastAddr_.push_back(ipElements_[i] | (~maskElements_[i] & 0xFF)); 
        
    } 

    //DISPLAY

    std::cout << "Network Address: "; 

    for(int i=0; i<4; i++) 
    { 
        std::cout << networkAddr_[i]; 
        
        if (i < 3) 
        { 
            std::cout << "."; 
        } 

    } 
    
    std::cout << " " <<std::endl; 
  
    std::cout << "Broadcast Address: "; 
    
    for (int i = 0; i < 4; i++)
    { 
        std::cout << broadcastAddr_[i]; 
        
        if (i < 3)
        { 
            std::cout << "."; 
        } 
    } 
    
    std::cout << " " <<std::endl; 
  
    std::cout << "Desired Netmask: " << netmask << std::endl; 

    //RANGE
    networkAddr_[3]++; 
    broadcastAddr_[3]--; 
    
    std::cout << "Usable IP Address Range: "; 

    for(int i=0; i<4; i++)
    { 
        std::cout << networkAddr_[i]; 
        
        if (i < 3)
        { 
            std::cout << "."; 
        } 
    } 
    std::cout << " - ";

    for(int i=0; i<4; i++)
    { 
        std::cout << broadcastAddr_[i]; 
        
        if(i < 3)
        { 
            std::cout << "."; 
        } 
    } 
    std::cout << " " <<std::endl; 
} 

int main()
{

    std::string ipAddress, netmask;
    int bitmask;
    int numUsableHosts;

    std::cout<< "Please enter an IP Address: ";
    std::cin>> ipAddress;

    std::cout<< "Please enter your desired netmask: ";
    std::cin>> netmask;

    std::cout<< "Please enter your desired netmask in bits: ";
    std::cin>> bitmask;

    numUsableHosts = (pow(2, (32 - bitmask)) - 2);
    std::cout<< "Number of Usable Hosts: " + numUsableHosts <<std::endl;

    IPCalculator(ipAddress, netmask);
    

    return 0;
}

