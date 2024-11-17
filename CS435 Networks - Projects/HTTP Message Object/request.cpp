#include "request.h"

//using namespace std;

request::request()
{
    method_ = "GET";
    path_ = "/";
    proto_ = "HTTP/1.1";
}


request::request(std::string method, std::string path)
{
    method_ = method;
    path_ = path;
    proto_ = "HTTP/1.1";
}


void request::set_method(std::string method)
{

}

void request::set_path(std::string path)
{

}

void request::set_proto(std::string proto)
{

}

void request::add_header(std::string name, std::string value)
{
    //how do we know if it's been added?
    headers_[name] = value; //just updates name... so check if overwritten and if that causes an issue

}
//void set_data(std::vector<std::byte> file);

std::string request::to_string(void)
{
    std::string req = method_ + " " + path_ + " " + proto_ + "\r\n";
    //if there are headers, add them.
    for(const auto& h : headers_)
    {
        req += h.first + ": " + h.second + "\r\n";
    }
    
    req += "\r\n";    
    
    return req;
}