#include "CIDR.h"

CIDR::CIDR()
{

}

CIDR::CIDR(std::string netmask)
{
    netmask_ = netmask;
}

std::string CIDR::getNetmask()
{
    return netmask_;
}

void CIDR::setNetmask(std::string nm)
{
    netmask_ = nm;
}

void CIDR::toMask(std::string parsedasCIDR)
{
    std::istringstream maskstream_(getNetmask());

    while(getline(maskstream_, maskSection_, '.')) 
    { 
        maskElements_.push_back(stoi(maskSection_)); 
    } 
}

std::string CIDR::calcNetAddr(/*std::string networkAddress*/)
{
    std::vector<unsigned int> ipElements_;
    
    for(size_t i=0; i<ipElements_.size(); i++)
    {
        netElements_.push_back(ipElements_[i] & maskElements_[i]);
    }

    std::cout<< "Network Address: ";

    for(int i=0; i<4; i++)
    {
        std::cout<< netElements_[i];

        if(i < 3)
        {
            std::cout<< "." <<std::endl;
        }

    }

    std::cout<< " " <<std::endl;

    return "This is the network address!";

}

std::string CIDR::calcBroadAddr(/*std::string broadcastAddress*/)
{
    std::vector<unsigned int> ipElements_;
    
    for (size_t i=0; i<ipElements_.size(); i++) 
    { 
        broadElements_.push_back(ipElements_[i] | (~maskElements_[i] & 0xFF)); 
    } 

    std::cout<< "Broadcast Address: ";

    for(int i=0; i<4; i++)
    {
        std::cout<< broadElements_[i];

        if(i < 3)
        {
            std::cout<< "." <<std::endl;
        }

    }

    std::cout<< " " <<std::endl;

    return "This is the broadcast address!";

}

