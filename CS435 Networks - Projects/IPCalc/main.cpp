#include "IP.h"
#include "CIDR.h"
#include <math.h>

int main()
{

    std::string ipAddress;
    int netmask;
    
    std::cout<< "Please enter an IP Address: ";
    std::cin>> ipAddress;

    std::cout<< "Please enter the desired netmask: ";
    std::cin>> netmask;

    // netmask = 24;

    // int actualNetmask = 0;

    // for(int i=0; i < netmask; i++) 
    // {
    //     actualNetmask = actualNetmask << 1;
    //     actualNetmask += 1;
    // }

    // actualNetmask = actualNetmask << 32 - netmask;

    // int numHosts = pow(2,(32 - netmask)) - 2;

    // std::cout<< "Number of Usable Hosts: " + numHosts <<std::endl;

    IP *mainIP = new IP("192.168.0.0"); //*ip = new IP("192.168.0.0");
    CIDR *mainmask = new CIDR("255.255.255.0");

    mainIP -> formatIP(ipAddress);
    mainmask -> toMask(std::to_string(netmask));
    mainmask -> calcNetAddr(); //shouldn't be void? return netElements?
    mainmask -> calcBroadAddr(); //shouldn't be void? return broadElements?
    

    delete mainIP;
    delete mainmask;

    return 0;
}