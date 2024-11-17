#include "IP.h"

IP::IP()
{

}

IP::IP(std::string ipAddress)
{
    ipAddress_ = ipAddress;
}

void IP::setIPAddress(std::string ip)
{
    ipAddress_ = ip;
}

// ~IP::IP()
// {

// }

std::string IP::getIPAddress()
{
    return ipAddress_;
}

void IP::formatIP(std::string parsedIP)
{
    std::istringstream ipstream_(getIPAddress());

    std::vector<unsigned int> ipElements_;
    
    while(getline(ipstream_, ipSection_, '.'))
    {
        ipElements_.push_back(stoi(ipSection_));
    }

}