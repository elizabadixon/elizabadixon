// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon

#include "Array.h"

int main()
{

    Array a1(15, 'a');
    std::cout << "a1 constructed!" << std::endl;

    Array a2(50, 'x');
    std::cout << "a2 constructed!!" << std::endl;

    Array a3 = a1;
    std::cout << "a3 constructed!!!" << std::endl;

    Array a4 = a1;
    std::cout << "a4 constructed!!!!" << std::endl;

    std::cout << "array 1:" << std::endl;
    for(int i=0; i < a1.size(); i++)
    {
        std::cout << a1[i] << " ";
    }
    std::cout << " " <<std::endl;

    a2 = a1;

    std::cout << "array 2:" << std::endl;
    for(int i=0; i < a2.size(); i++){

        std::cout << a2[i] << " ";
    }
    std::cout << std::endl;

    a3.set(12,'b');

    std::cout << "array 3:" << std::endl;
    for(int i=0; i < a3.size(); i++)
    {
        std::cout << a3[i] << " ";
    }
    std::cout << " " <<std::endl;

    std::cout << a3.get(12) << std::endl;
    std::cout<< "new a3 gotten! :" <<std::endl;

    if (a1 == a2)
    {
        std::cout << "a1=a2" << std::endl;
    }
    else
    {
        std::cout << "a1=a2 is false!" << std::endl;
    }

    if (a1 == a3)
    {
        std::cout << "a1=a3" << std::endl;
    }
    else
    {
        std::cout << "a1=a3is false!" << std::endl;
    }

    if (a2 == a3)
    {
        std::cout << "a2=a3" << std::endl;
    }
    else
    {
        std::cout << "a2=a3 is false!" << std::endl;
    }

    std::cout << std::endl;

    if (a1 != a2)
    {
        std::cout << "a1!=a2" << std::endl;
    }
    else
    {
        std::cout << "a1!=a2 is false!" << std::endl;
    }

    if (a1 != a3)
    {
        std::cout << "a1!=a3" << std::endl;
    }
    else
    {
        std::cout << "a1!=a3 is false!" << std::endl;
    }

    if (a2 != a3)
    {
        std::cout << "a2!=a3" << std::endl;
    }
    else
    {
        std::cout << "a2!=a3 is false!" << std::endl;
    }

    std::cout << a3.size() << " " << a3.max_size() << std::endl;

    a3.resize(90);

    std::cout << a3.size() << " " << a3.max_size() << std::endl;

    a4.fill('q');

    std::cout << "Array 4:" << std::endl;
    for(int i=0; i < a4.size(); i++)
    {
        std::cout << a4[i] << " ";
    }
    std::cout << "" <<std::endl;

    const char x = a1[1];

    std::cout << "The index 1 of a1 as const char x is: "<< x << std::endl;

    std::cout << "testing... testing... 1, 2, 3..." << std::endl;

    if(a2 != a2)
    {
        std::cout << "is the same value NOT equal to itself? false..." << std::endl;
    }
    else{
        std::cout << "otherwise, the same value IS equal to itself. true!" << std::endl;
    }

    Array a5(30, 'f');


    std::cout << "Array 5:" << std::endl;
    for(int i=0; i < a5.size(); i++)
    {
        std::cout << a5[i] << " ";
        std::cout<< a5.size() <<std::endl;
    }
    std::cout << "" <<std::endl;

    a5.resize(20);

    std::cout << "RESIZED Array 5:" << std::endl;
    for(int i=0; i < a5.size(); i++)
    {
        std::cout << a5[i] << " ";
        std::cout<< a5.size() <<std::endl;
    }

    a5.resize(27);
    a5.set(3, 'x');

    std::cout << "RE-RESIZED Array 5:" << std::endl;
    for(int i=0; i < a5.size(); i++)
    {
        std::cout << a5[i] << " ";
        std::cout<< a5.size() <<std::endl;
    }

    std::cout<< a5.find('z', 12) <<std::endl;

    return 0;
}
