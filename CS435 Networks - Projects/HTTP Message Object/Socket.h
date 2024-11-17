#include <string>
#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <netdb.h>
#include <netinet/in.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#ifndef SOCKET_H
#define SOCKET_H

#define MAXHOSTNAME 256
#define BUFFER_SIZE 8192

//using namespace std;

// #define MAXHOSTNAME 256
// #define BUFFER_SIZE 2048

class Socket
{
  public:
    Socket(); // set some reasonable, deault host_ and port_ (could be host names like in host_; default port like 43500, 88888)
    Socket(std::string host, int port);
    Socket(int socketdesc); // start with an existing socket (for servers)

    void connect();
    void close();
    void send(std::string message);
    std::string recv();
    void listen();
    void bind();
    /*int*/ void accept();
    

    private:
      int socket_; // could sock_t - alias for an int
      int port_; // could be short int - aas'll use hosttonetworkshort (htons) on it either way // should use #s 0-65535, but actually 1025 (16 bits)
      std::string host_; // like (strings) "127.0.0.1" (reserved IP address for local host) or "thomas.butler.edu"
      struct sockaddr_in remoteSocketInfo;
      struct hostent *hPtr;
      int socketHandle; //same as socket_
};
#endif