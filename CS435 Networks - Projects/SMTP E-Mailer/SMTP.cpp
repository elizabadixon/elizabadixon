#include "SMTP.h"

SMTP::SMTP()
{
    s = new Socket("thomas.butler.edu", 1025);
}

SMTP::SMTP(string host, int port)
{
    s = new Socket(host, port);
}

void SMTP::send(string mailmessage)
{
    //Socket *s;
    
    s -> connect();
    string response = s -> recv();
    cout << response <<endl;
    s -> send("HELO thomas.butler.edu\r\n");
    s -> recv();
    cout << response <<endl;
    s -> send("MAIL FROM: <eadixon@butler.edu>\r\n");
    s -> recv();
    cout << response <<endl;
    s -> send("RCPT TO: <eadixon@butler.edu>\r\n");
    s -> recv();
    cout << response <<endl;
    s -> send("DATA\r\n");
    s -> recv();
    cout << response <<endl;
    s -> send("Subject: another another SMTP project test\r\nhello, world!!!!!!!!!!!\r\n.\r\n");
    s -> recv();
    cout << response <<endl;
    s -> send("QUIT\r\n");
    s -> recv();
    cout << response <<endl;
    s -> close();
    
    //delete s;

}