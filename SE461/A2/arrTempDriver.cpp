// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
//eadixon

#include "Curr_Array.h"
#include "Array.h"
#include "Fixed_Array.h"
#include "Stack.h"
#include "Queue.h"


int main()
{
    std::cout<< "this file is running!" <<std::endl;

    //CURR_ARRAY TESTING -------------------------------------
    
    // Curr_Array<int> ca1 = Curr_Array<int>(15, 5);
    // std::cout << "a1 constructed!" << std::endl;

    // Curr_Array<int> ca2 = Curr_Array<int>(50, 13);
    // std::cout << "a2 constructed!!" << std::endl;

    // Curr_Array<int> ca3 = ca1;
    // std::cout << "a3 constructed!!!" << std::endl;

    // Curr_Array<int> ca4 = ca1;
    // std::cout << "a4 constructed!!!!" << std::endl;

    // std::cout << "array 1:" << std::endl;
    // for(int i=0; i < ca1.size(); i++)
    // {
    //     std::cout << ca1[i] << " ";
    // }
    // std::cout << " " <<std::endl;

    // //ca2 = ca1;

    // std::cout << "array 2:" << std::endl;
    // for(int i=0; i < ca2.size(); i++){

    //     std::cout << ca2[i] << " ";
    // }
    // std::cout << std::endl;

    // ca3.set(12, 100);

    // std::cout << "array 3:" << std::endl;
    // for(int i=0; i < ca3.size(); i++)
    // {
    //     std::cout << ca3[i] << " ";
    // }
    // std::cout << " " <<std::endl;

    // std::cout << ca3.get(12) << std::endl;
    // std::cout<< "new a3 gotten! :" <<std::endl;

    // if (ca1 == ca2)
    // {
    //     std::cout << "a1=a2" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1=a2 is false!" << std::endl;
    // }

    // if (ca1 == ca3)
    // {
    //     std::cout << "a1=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1=a3is false!" << std::endl;
    // }

    // if (ca2 == ca3)
    // {
    //     std::cout << "a2=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a2=a3 is false!" << std::endl;
    // }

    // std::cout << std::endl;

    // if (ca1 != ca2)
    // {
    //     std::cout << "a1!=a2" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1!=a2 is false!" << std::endl;
    // }

    // if (ca1 != ca3)
    // {
    //     std::cout << "a1!=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1!=a3 is false!" << std::endl;
    // }

    // if (ca2 != ca3)
    // {
    //     std::cout << "a2!=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a2!=a3 is false!" << std::endl;
    // }


    // ca4.fill(10);

    // std::cout << "Array 4:" << std::endl;
    // for(int i=0; i < ca4.size(); i++)
    // {
    //     std::cout << ca4[i] << " ";
    // }
    // std::cout << "" <<std::endl;

    // const int x = ca1[1];

    // std::cout <<"The index 1 of a1 as const T x is: "<< x <<std::endl;
    // std::cout << std::endl;

    // std::cout << "testing... testing... 1, 2, 3..." <<std::endl;
    // std::cout << std::endl;

    // if(ca2 != ca2)
    // {
    //     std::cout << "is the same value NOT equal to itself? false..." << std::endl;
    // }
    // else{
    //     std::cout << "otherwise, the same value IS equal to itself. true!" << std::endl;
    // }

    // std::cout << std::endl;

    // Curr_Array<int> ca5 = Curr_Array<int>(30, 1115);
    // std::cout<< "Curr_Array 5 has been constructed!!" <<std::endl;


    // std::cout << "Array 5:" << std::endl;
    // for(int i=0; i < ca5.size(); i++)
    // {
    //     std::cout << ca5[i] << " ";
    //     std::cout<< ca5.size() <<std::endl;
    // }
    // std::cout << "" <<std::endl;
    
    // std::cout<< ca5.find(1115, 12) <<std::endl;
    

    // // // //CURR_ARRAY TESTING ------------------------------------- OVER



    // // // // //ARRAY TESTING ------------------------------------- START
    
    // Array<int> a1 = Array<int>(30, 3);
    // std::cout << "a1 constructed!" << std::endl;

    // Array<int> a2 = Array<int>(15, 25);
    // std::cout << "a2 constructed!!" << std::endl;

    // Array<int> a3 = a1;
    // std::cout << "a3 constructed!!!" << std::endl;

    // Array<int> a4 = a1;
    // std::cout << "a4 constructed!!!!" << std::endl;

    // a2 = a1;

    // std::cout << "array 1:" << std::endl;
    // for(int i=0; i < a1.size(); i++)
    // {
    //     std::cout << a1[i] << " ";
    // }
    // std::cout << " " <<std::endl;

    

    // std::cout << "array 2:" << std::endl;
    // for(int i=0; i < a2.size(); i++){

    //     std::cout << a2[i] << " ";
    // }
    // std::cout << std::endl;

    // a3.set(12, 666);

    // std::cout << "array 3:" << std::endl;
    // for(int i=0; i < a3.size(); i++)
    // {
    //     std::cout << a3[i] << " ";
    // }
    // std::cout << " " <<std::endl;

    // std::cout<< "new a3 gotten! :" <<std::endl;
    // std::cout << a3.get(12) << std::endl;

    // if (a1 == a2)
    // {
    //     std::cout << "a1=a2" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1=a2 is false!" << std::endl;
    // }

    // if (a1 == a3)
    // {
    //     std::cout << "a1=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1=a3is false!" << std::endl;
    // }

    // if (a2 == a3)
    // {
    //     std::cout << "a2=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a2=a3 is false!" << std::endl;
    // }

    // std::cout << std::endl;

    // if (a1 != a2)
    // {
    //     std::cout << "a1!=a2" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1!=a2 is false!" << std::endl;
    // }

    // if (a1 != a3)
    // {
    //     std::cout << "a1!=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a1!=a3 is false!" << std::endl;
    // }

    // if (a2 != a3)
    // {
    //     std::cout << "a2!=a3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a2!=a3 is false!" << std::endl;
    // }

    // std::cout << a3.size() << " " << a3.max_size() << std::endl;

    // a3.resize(112);

    // std::cout << a3.size() << " " << a3.max_size() << std::endl;

    // a4.fill(2048);

    // std::cout << "Array 4:" << std::endl;
    // for(int i=0; i < a4.size(); i++)
    // {
    //     std::cout << a4[i] << " ";
    // }
    // std::cout << "" <<std::endl;

    // const int y = a1[1];

    // std::cout <<"The index 1 of a1 as const char x is: "<< y << std::endl;

    // std::cout << "testing... testing... 1, 2, 3..." << std::endl;

    // if(a2 != a2)
    // {
    //     std::cout << "is the same value NOT equal to itself? false..." << std::endl;
    // }
    // else{
    //     std::cout << "otherwise, the same value IS equal to itself. true!" << std::endl;
    // }

    // Array a5(30, 2550);


    // std::cout << "Array 5:" << std::endl;
    // for(int i=0; i < a5.size(); i++)
    // {
    //     std::cout << a5[i] << " ";
    //     std::cout<< a5.size() <<std::endl;
    // }
    // std::cout << "" <<std::endl;

    // a5.resize(20);

    // std::cout << "RESIZED Array 5:" << std::endl;
    // for(int i=0; i < a5.size(); i++)
    // {
    //     std::cout << a5[i] << " ";
    //     std::cout<< a5.size() <<std::endl;
    // }

    // a5.resize(27);
    // a5.set(3, 1);

    // std::cout << "RE-RESIZED Array 5:" << std::endl;
    // for(int i=0; i < a5.size(); i++)
    // {
    //     std::cout << a5[i] << " ";
    //     std::cout<< a5.size() <<std::endl;
    // }

    // std::cout<< a5.find(22, 12) <<std::endl;

    // // // //ARRAY TESTING ------------------------------------- OVER

    // // // //FIXED_ARRAY TESTING ------------------------------------- START

    // Fixed_Array<int, 16> fa1 = Fixed_Array<int, 16>(333);

    // if(fa1.size())
    // {
    //     std::cout<< "A fixed array with a max size of " << fa1.size() << " has just been constructed!" <<std::endl;
    // }

    // std::cout << "Fixed_Array 1:" << std::endl;
    // for(int i = 0; i < fa1.size(); i++)
    // {
    //     std::cout << fa1[i] << " " <<std::endl;;
    // }

    // Fixed_Array<int, 12> fa2 = Fixed_Array<int, 12>(11);
    // std::cout << "Fixed_Array 2 constructed!" << std::endl;

    // Fixed_Array<int, 12> fa3 = fa2;
    // std::cout << "Fixed_Array 3 constructed!" << std::endl;

    // Fixed_Array<int, 16> fa4 = fa1;
    // std::cout << "Fixed_Array 4 constructed!" << std::endl;

    // std::cout<< "A2 SIZE: " << fa2.size() << std::endl;

    // std::cout << "Fixed_Array 2:" << std::endl;
    // for(int i = 0; i < fa2.size(); i++)
    // {
    //     std::cout << fa2[i] << " ";
    // }

    // std::cout << std::endl;

    // fa3.set(4, 6);


    // std::cout << "new Fixed_Array 3:" << std::endl;
    // for(int i = 0; i < fa3.size(); i++)
    // {
    //     std::cout << fa3[i] << " ";
    // }

    // std::cout << std::endl;

    // std::cout<< "A3 SIZE: " << fa3.size() << std::endl;

    // std::cout << fa3.get(0) << std::endl;

    // std::cout << fa3.find(6) << std::endl;

    // std::cout << fa1.find(6, 5) << std::endl;

    // std::cout << "new Fixed_Array 1:" << std::endl;
    // for(int i = 0; i < fa1.size(); i++)
    // {
    //     std::cout << fa1[i] << " ";
    // }

    // std::cout << std::endl;

    // std::cout << "new Fixed_Array 2:" << std::endl;
    // for(int i = 0; i < fa2.size(); i++)
    // {
    //     std::cout << fa2[i] << " ";
    // }

    // std::cout << std::endl;

    // std::cout << "new Fixed_Array 3:" << std::endl;
    // for(int i = 0; i < fa3.size(); i++)
    // {
    //     std::cout << fa3[i] << " ";
    // }
    // std::cout << std::endl;

    // if (fa1 == fa2)
    // {
    //     std::cout << "True A1=A2" << std::endl;
    // }
    // else
    // {
    //     std::cout << "False A1=A2" << std::endl;
    // }

    // if (fa1 == fa3)
    // {
    //     std::cout << "True A1=A3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "False A1=A3" << std::endl;
    // }

    // if (fa2 == fa3)
    // {
    //     std::cout << "True A2=A3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "False A2=A3" << std::endl;
    // }

    // std::cout << std::endl;

    // if (fa1 != fa2)
    // {
    //     std::cout << "True A1!=A2" << std::endl;
    // }
    // else
    // {
    //     std::cout << "False A1!=A2" << std::endl;
    // }

    // if (fa1 != fa3)
    // {
    //     std::cout << "True A1!=A3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "False A1!=A3" << std::endl;
    // }

    // if (fa2 != fa3)
    // {
    //     std::cout << "True A2!=A3" << std::endl;
    // }
    // else
    // {
    //     std::cout << "False A2!=A3" << std::endl;
    // }

    // std::cout << fa3.size() << std::endl;

    // std::cout << "newnew Fixed_Array 4:" << std::endl;
    // for(int i = 0; i < fa4.size(); i++)
    // {
    //     std::cout << fa4[i] << " ";
    // }

    // fa4.fill(10);

    // std::cout << std::endl;


    // std::cout << "newnewFixed_Array 4:" << std::endl;
    // for(int i = 0; i < fa4.size(); i++)
    // {
    //     std::cout << fa4[i] << " ";
    // }

    // std::cout << std::endl;

    // const int z = fa1[1];

    // std::cout << "the constant int z equals: " << z << "!" << std::endl;


    // if(fa2 != fa2)
    // {
    //     std::cout << " Self False" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Self True" << std::endl;
    // }

    // std::cout<< "A1 SIZE: " << fa1.size() << std::endl;
    // std::cout<< "A2 SIZE: " << fa2.size() << std::endl;
    // std::cout<< "A3 SIZE: " << fa3.size() << std::endl;
    // std::cout<< "A4 SIZE: " << fa4.size() << std::endl;

    // //FIXED_ARRAY TESTING ------------------------------------- OVER


    // //STACK TESTING ------------------------------------- START

    // std::cout<< " " <<std::endl;


    // Stack<int> s1 = Stack<int>();

    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // s1.push(1);
    // std::cout<< "pushed!" <<std::endl;

    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "clear() call belowVVV" <<std::endl;
    // s1.clear(); //triggers is_empty() check message for some reason
    // std::cout<< "right after clear() call ^^^" <<std::endl;
    // std::cout<< "Is the stack empty? " << s1.is_empty() <<std::endl;


    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // s1.push(3);
    // std::cout<< "pushed!" <<std::endl;
    
    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // s1.push(4);
    // std::cout<< "pushed!" <<std::endl;

    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // for(int i=0; i<s1.size(); i++)
    // {
    //     std::cout<< s1.top() <<std::endl;
    // }

    // s1.push(6);
    // std::cout<< "pushed!" <<std::endl;

    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // for(int i=0; i<s1.size(); i++)
    // {
    //     std::cout<< s1.top() <<std::endl;
    // }

    // std::cout<< " " <<std::endl;
    // std::cout<< "Is the stack empty? right before pop()" << s1.is_empty() <<std::endl;

    // std::cout<< " " <<std::endl;
    // s1.pop(); 
    // std::cout<< "popped!" <<std::endl;
    // std::cout<< " " <<std::endl;

    // for(int i=0; i<s1.size(); i++) 
    // {
    //     std::cout<< s1.top() <<std::endl;
    // }

    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "Is the stack empty? " << s1.is_empty() <<std::endl;
    // std::cout<< " " <<std::endl;

    // s1.clear();
    // std::cout<< "cleared!" <<std::endl;
    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // for(int i=0; i<s1.size(); i++)
    // {
    //     std::cout<< s1.top() <<std::endl;
    // }

    // std::cout<< "s1 SIZE: " << s1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "Is the stack empty? " << s1.is_empty() <<std::endl;

    // //STACK TESTING ------------------------------------- OVER


    // //QUEUE TESTING ------------------------------------- START

    Queue<int> q1 = Queue<int> ();

    std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    std::cout<< " " <<std::endl;

    std::cout<< "head: " << q1.head() <<std::endl;
    std::cout<< "tail: " << q1.tail() <<std::endl;
    std::cout<< " " <<std::endl;

    std::cout<< "dequeueing..." <<std::endl;
    q1.dequeue(0);

    // std::cout<< "clearing.." <<std::endl;
    // q1.clear();

    // std::cout<< "dequeueing..." <<std::endl;
    // q1.dequeue(0);

    std::cout<< "enqueueing..." <<std::endl;
    q1.enqueue(1);

    std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    std::cout<< "checking for head and tail elements..." <<std::endl;
    std::cout<< "head: " << q1.head() <<std::endl;
    std::cout<< "tail: " << q1.tail() <<std::endl;
    std::cout<< " " <<std::endl;

    // std::cout<< "clearing.." <<std::endl;
    // q1.clear();

    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "enqueueing..." <<std::endl;
    // q1.enqueue(2);
    // std::cout<< "checking for head and tail elements..." <<std::endl;
    // std::cout<< "head: " << q1.head() <<std::endl;
    // std::cout<< "tail: " << q1.tail() <<std::endl;
    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "enqueueing..." <<std::endl;
    // q1.enqueue(4);
    // std::cout<< "checking for head and tail elements..." <<std::endl;
    // std::cout<< "head: " << q1.head() <<std::endl;
    // std::cout<< "tail: " << q1.tail() <<std::endl;
    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "enqueueing..." <<std::endl;
    // q1.enqueue(6);
    // std::cout<< "checking for head and tail elements..." <<std::endl;
    // std::cout<< "head: " << q1.head() <<std::endl;
    // std::cout<< "tail: " << q1.tail() <<std::endl;
    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "dequeueing..." <<std::endl;
    // q1.dequeue(0);
    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< "checking for head and tail elements after DEQUEUING..." <<std::endl;
    // std::cout<< "head: " << q1.head() <<std::endl;
    // std::cout<< "tail: " << q1.tail() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "dequeueing..." <<std::endl;
    // q1.dequeue(0);
    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< "checking for head and tail elements after dequeuing AGAIN..." <<std::endl;
    // std::cout<< "head: " << q1.head() <<std::endl;
    // std::cout<< "tail: " << q1.tail() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "Is the queue empty? " << q1.is_empty() <<std::endl;

    // std::cout<< "clearing.." <<std::endl;
    // q1.clear();
    // std::cout<< "checking for head and tail elements..." <<std::endl;
    // std::cout<< "head: " << q1.head() <<std::endl;
    // std::cout<< "tail: " << q1.tail() <<std::endl;
    // std::cout<< "q1 SIZE: " << q1.size() <<std::endl;
    // std::cout<< " " <<std::endl;

    // std::cout<< "Is the queue empty? " << q1.is_empty() <<std::endl;     
     

    return 0;
}