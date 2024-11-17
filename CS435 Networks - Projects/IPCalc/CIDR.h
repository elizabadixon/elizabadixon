#ifndef CIDR_H
#define CIDR_H
#include <iostream> 
#include <string> 
#include <vector> 
#include <bitset> 
#include <sstream> 
#include "IP.h"

class CIDR
{
    public:
        CIDR();
        CIDR(std::string netmask);
        //~CIDR();
        void toMask(std::string parsedasCIDR);
        std::string calcNetAddr();//void calcNetAddr(std::string networkAddress);
        std::string calcBroadAddr(); //void calcBroadAddr(std::string broadcastAddress);
        std::string getNetmask();
        void setNetmask(std::string nm);
        
    private:
        std::vector<unsigned int> maskElements_;
        std::vector<unsigned int> netElements_;
        std::vector<unsigned int> broadElements_;
        std::string maskSection_;
        std::string netmask_;
    
};
#endif