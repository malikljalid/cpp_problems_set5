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

    //Extension #1
    std::cout << "\n\n Item(2) : " << MyQueue.getItem(2);
    
    //Extension #2
    MyQueue.reverse();
    std::cout << "\n\nQueue after reverse() : \n";
    MyQueue.print();

    //Extension #3
    MyQueue.updateItem(2, 600);
    std::cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.print();

    //Extension #4
    MyQueue.insertAfter(2, 800);
    std::cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.print();

    //Extension #5
    MyQueue.insertAtFront(1000);
    std::cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.print();

    //Extension #6
    MyQueue.insertAtBack(2000);
    std::cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.print();

    //Extension #7
    MyQueue.clear();
    std::cout << "\n\nQueue after Clear(): \n";
    MyQueue.print();

    return (0);
}
