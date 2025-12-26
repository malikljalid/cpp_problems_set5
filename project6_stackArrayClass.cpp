#include "project6_stackArrayClass.hpp"

int main(void)
{
    clsStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    std::cout << "\nStack: \n";
    MyStack.print();

    std::cout << "\nStack Size: " << MyStack.size();
    std::cout << "\nStack Top: " << MyStack.top();

    MyStack.pop();

    std::cout << "\n\nStack after pop() : \n";
    MyStack.print();

    //Extension #1
    std::cout << "\n\n Item(2) : " << MyStack.getItem(2);
    
    //Extension #2
    MyStack.reverse();
    std::cout << "\n\nStack after reverse() : \n";
    MyStack.print();

    //Extension #3
    MyStack.updateItem(2, 600);
    std::cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.print();

    //Extension #4
    MyStack.insertAfter(2, 800);
    std::cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.print();


    //Extension #5
    MyStack.insertAtFront(1000);
    std::cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.print();

    //Extension #6
    MyStack.insertAtBack(2000);
    std::cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.print();

    //Extension #7
    MyStack.clear();
    std::cout << "\n\nStack after Clear(): \n";
    MyStack.print();

    return (0);

}
