#ifndef IP_H
#define IP_H
#include <iostream> 
#include <string> 
#include <vector> 
#include <bitset> 
#include <sstream> 
#include "CIDR.h"

class IP
{
    public:
        IP();
        IP(std::string ipAddress);
        //~IP();
        void formatIP(std::string parsedIP);
        void setIPAddress(std::string ip);
        std::string getIPAddress();

    private:
        //std::vector<unsigned int> ipElements_;
        std::string ipSection_;
        std::string ipAddress_;


};
#endif