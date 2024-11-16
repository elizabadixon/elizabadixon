#include "Socket.h"

#ifndef SMTP_H
#define SMTP_H

class SMTP
{
    public:
        SMTP();
        SMTP(string host, int port); //port 1025
        void send(string mailmessage);

    private:
        Socket *s;
        
};
#endif

