#include <iostream>
#include <ctime>
#include "request.h"
//#include "response.h"
#include "Socket.h"

//using namespace std;

// std::string make_time()
// {

// }

int main(int argc, char **argv)
{
    /*
        create and send an http request (make sure you can recv too)
        think about the URL: hhtp://httpbin.org/get

        and that should send:

        GET /get HTTP/1.1\r\n
        Host: httpbin.org\r\n
        User-agent: main.cpp\r\n
        \r\n
    */

   std::string message_check = "GET /get HTTP/1.1\r\nHost: httpbin.org\r\nUser-agent: main.cpp\r\n\r\n";
    
    //Socket *s = new Socket(host, port);
    request *r = new request("GET", "/get");
    r -> add_header("Host", "httpbin.org");
    r -> add_header("User-agent", "httpMain");
    r -> add_header("Connection", "close");

    std::cout<< r -> to_string() <<std::endl;

    //testing
    // if(r -> to_string() == message_check)
    // {
    //     std::cout<< "omg it works!!" <<std::endl;
    // }

    Socket *s = new Socket("httpbin.org", 80);
    s -> connect();
    s -> send(r -> to_string());
    std::string response = s -> recv();
    s -> close();

    std::cout<< response <<std::endl;

    delete r;

    return EXIT_SUCCESS;
}