#include <iostream>
#include "project2_queueClass.hpp"

int main(void)
{
    clsQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);
   
   
    std::cout << "\nQueue: \n";
    MyQueue.print();

    std::cout << "\nQueue Size : " << MyQueue.size() ;
    std::cout << "\nQueue Front: " << MyQueue.front() ;
    std::cout << "\nQueue Back : " << MyQueue.back() ;

    MyQueue.pop();

    std::cout << "\n\nQueue after pop() : \n";
    MyQueue.print();
}
