#include <iostream>
#include <string>
#include "Socket.h"

using namespace std;

int main(int argc, char** argv)
{
    //cout<< "makefile worked!!!!!!!!" <<endl;
    
    string host = "thomas.butler.edu";
    
    //cout << "creating a socket..." << endl;
    
    //Socket *s; //= new Socket(host, 12345);
    
    Socket sockinst;

    sockinst.connect(); //refused bc no server?
    sockinst.send("hi!");
    

    // s -> connect();
    // s -> send("hello , world");
    // string response = s -> recv();
    // cout<< response << endl;

    // s -> close();

    return EXIT_SUCCESS;
    //delete s;
}