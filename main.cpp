//
// Created by jskag on 6/27/2022.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(){

    //Stack Data Type (5.1)

    //What's a Stack?

    //1. a List with restricted access
    //2. only the top item on the stack is accessible
    //3. LIFO (Last In First Out)
    //4. items come out in reverse order


    //What operations are supported by a Stack?
    //What's the abstract interface for a Stack?

    //push(item);
    //pop();
    //top();
    //empty();

    //Classwork
    //You may work with a partner.

    //What does the program print?

    //Stack S1;
    //S1.push(4);
    //S1.push(2);
    //S1.push(4);
    //S1.push(8);
    //print(S1);

    //Stack S2;
    //Stack S3;
    //while (!S1.empty()) {
    //    S2.push(S1.pop());
    //    S3.push(S1.pop());
    //}
    //print(S2);
    //print(S3);

    //while (!S2.empty())
    //S3.push(S2.pop());
    //print(S3);



    //What kinds of applications is a Stack good for?
    //What kinds of problems can be solved using a Stack?

    //nested data
    //data with a reversing nature


    //        Stacks in the C++ Library

    //#include <stack>
    //        std::stack


    //What are some of the operations supported by std::stack?

    //void push ( const ItemType& item );
    //void pop ( );  // does not return the popped item
    //ItemType& top ( );
    //bool empty () const;
    //size_t size() const;











    //Queue Data Type (6.1)

    //What's a Queue?

    //1. a line of customers waiting for service
    //2. a List with restricted access
    //3. only the item at the front of the queue is accessible
    //4. FIFO (First In First Out)
    //5. items come out in the order they were added

    //What operations are supported by a Queue?
    //What's the abstract interface for a Queue?

    //add (item);
    //remove ();
    //front();
    //empty();


    //Classwork
    //You may work with a partner.

    //What does the program print?

    //Queue Q1;
    //Q1.add(4);
    //Q1.add(2);
    //Q1.add(4);
    //Q1.add(8);
    //print(Q1);

    //Queue Q2;
    //Queue Q3;
    //while (!Q1.empty()) {
    //    Q2.add(Q1.remove());
    //    Q3.add(Q1.remove());
    //}
    //print(Q2);
    //print(Q3);

    //while (!Q2.empty())
    //Q3.add(Q2.remove());
    //print(Q3);



    //What kinds of applications is a Queue good for?
    //What kinds of problems can be solved using a Queue?

    //1. request queue for a server (with fair service)
    //2. simulation


    //Queues in the C++ Library
    //#include <queue>
    //std::queue

    //What are some of the operations supported by std::queue?

    //void push ( const ItemType& x );
    //void pop ( );  // does not return the popped item
    //ItemType& front ( );
    //bool empty () const;
    //size_t size() const;


    //Priority Queue Data Type (8.5 pages 489-490)

    //What's a Priority Queue?

    //1. a Queue where the order of service is based on priority
    //2. each item in the queue is assigned a priority
    //3. only the highest-priority item is accessible

    //What operations are supported by a Priority Queue?
    //What's the abstract interface for a Priority Queue?

    //add (item);
    //remove ();
    //top();
    //empty();


    //Classwork
    //You may work with a partner.

    //What does the program print?

    //PriorityQueue Q1;
    //Q1.add(8);
    //Q1.add(2);
    //Q1.add(4);
    //Q1.add(1);
    //print(Q1);

    //PriorityQueue Q2;
    //PriorityQueue Q3;
    //while (!Q1.empty()) {
    //    Q2.add(Q1.remove());
    //    Q3.add(Q1.remove());
    //}
    //print(Q2);
    //print(Q3);

    //while (!Q2.empty())
    //Q3.add(Q2.remove());
    //print(Q3);


    //What are some examples where Priority Queues are used?

    //when smaller requests should be serviced first

    //Priority Queues in the C++ Library

    //#include <queue>
    //std::priority_queue

    //What are some of the operations supported by std::priority_queue?

    //void push ( const ItemType& x );
    //void pop ( );  // does not return the popped item
    //ItemType& top ( );
    //bool empty () const;
    //size_t size() const;


}
