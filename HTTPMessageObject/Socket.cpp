#include "Socket.h"


// CONSTRUCTORS ********************

Socket::Socket()
{
    int socket_;
    host_ = "localhost";
    port_ = 1025;
    std::cout << "creating a socket..." << std::endl;
}

Socket::Socket(std::string host, int port)
{
    struct sockaddr_in remoteSocketInfo;
    struct hostent *hPtr;
    int socket_;
    host_ = host;
    port_ = port;
}

Socket::Socket(int socketdesc) 
{
    socket_ = socketdesc;
}


// METHODS  ********************

void Socket::connect() //prompt user and read input
{
    if((hPtr = gethostbyname(host_.c_str())) == NULL) 
    {
        perror("gethostbyname");
        exit(EXIT_FAILURE);
    }

    //socket instance
    if((socket_ = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
    {
        perror("socket");
        ::close(socket_);
        exit(EXIT_FAILURE);
    }

    memset(&remoteSocketInfo, 0, sizeof(remoteSocketInfo));

    memcpy(&remoteSocketInfo.sin_addr.s_addr, hPtr -> h_addr, hPtr -> h_length);
    remoteSocketInfo.sin_family = AF_INET;
    remoteSocketInfo.sin_port = htons(port_); // sets port #

    if(::connect(socket_, (struct sockaddr *)&remoteSocketInfo, sizeof(sockaddr_in)) < 0) 
    {
        perror("connect");
        ::close(socketHandle);
        exit(EXIT_FAILURE);
    }

    std::cout<< "connecting..." <<std::endl;
}

/*server addition*/ void Socket::bind() //bind to an address to tell what port you're located on
{
    


    std::cout<< "binding..." <<std::endl;
}

/*server addition*/ void Socket::listen() //wait for connection to be established
{
    


    std::cout<< "listening..." <<std::endl;
}

/*server addition*/ /*void for now - simply socket purposes int*/ void Socket::accept() //gotten connection from client
{
    


    std::cout<< "accepting request..." <<std::endl;
}

void Socket::send(std::string message) //turn input into message to send //decryption?
{
    if(::send(socket_, message.c_str(), message.length(), 0) < 0) 
    {
        perror("send");
        std::cout<< "sending message..." <<std::endl;
        ::close(socket_);
        exit(EXIT_FAILURE);
    }
}

std::string Socket::recv() //receive, decode, and handle message sent - create response message --> send back until interaction over //decryption?
{
    int bytes_read = 0; // Actual number of bytes read
    char buf[BUFFER_SIZE];

    bytes_read = ::recv(socket_, buf, BUFFER_SIZE, 0);
    buf[bytes_read] = '\0';

    //cout << "Number of bytes read: " << bytes_read << endl;
    //cout << "Received: " << buf << endl;
    
    std::cout<< "receiving..." <<std::endl;
    return buf;

}

void Socket::close()
{
    ::close(socket_);
    std::cout<< "closing..." <<std::endl;
}