#ifndef REQUEST_H
#define REQUEST_H

#include <string>
#include <unordered_map> //for storing headers
#include <cstddef>
#include <vector> //to store data

//using namespace std;

class request
{
    private:
        std::string method_;
        std::string path_;
        std::string proto_; //protocol version (we're hardcoding 1.1)
        std::unordered_map<std::string, std::string> headers_;
        std::vector<std::byte> data_; //bytes bc files sent won't be text, so treat them more universally as bytes

    public:
        request();
        request(std::string method, std::string path);
        void set_method(std::string method);
        void set_path(std::string path);
        void set_proto(std::string proto);
        void add_header(std::string name, std::string value);
        //void set_data(std::vector<std::byte> file);
        std::string to_string(void);
        

};

#endif