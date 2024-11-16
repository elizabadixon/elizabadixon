#include <iostream>
#include <string>
//#include "Socket.h"
#include "SMTP.h"

using namespace std;

int main(int argc, char** argv)
{
    
    string host = "thomas.butler.edu";
    
    //Socket * s = new Socket(host, 1025); //1025 for mail?
    SMTP * m = new SMTP(host, 1025); // m -> send();

    // s -> connect();
    // s -> send("sending message"); //switch send and recv for smtp
    // s -> recv();
    // s -> close();

    m -> send("SMTP project works!\r\n");

    
    //SMTP testSMTP;
    //testSMTP.send(email);

    //all referenced by sockinst VVVVVVVVV
    //connect(what? - ), send("HELO thomas.butler.edu"), recv(port #?), message(string mailmessage), close()... but how do I implement this into my SMTP object?
    
    // s -> connect();
    // s -> send("hello , world");
    // string response = s -> recv();
    // cout<< response << endl;

    delete m;
    //delete s;

    return EXIT_SUCCESS;
}