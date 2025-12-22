#include "project1_doublyLinkedListClass.hpp"

int main(void)
{
    
    clsDoublyLinkedList <int> MydblLinkedList;

    MydblLinkedList.insertAtBeginning(5);
    MydblLinkedList.insertAtBeginning(4);
    MydblLinkedList.insertAtBeginning(3);
    MydblLinkedList.insertAtBeginning(2);
    MydblLinkedList.insertAtBeginning(1);
   
    std::cout << "\nLinked List Contenet:\n";
    MydblLinkedList.printList();

    clsDoublyLinkedList <int> *N1 = MydblLinkedList.find(2);

    if (N1 != NULL)
        std::cout << "\nNode with value " << 2 << " is Found :-)\n";
    else
        std::cout << "\nNode Is not found :-(\n";

    MydblLinkedList.insertAfter(N1, 500);
    std::cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.printList();

    MydblLinkedList.insertAtEnd(700);
    std::cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.printList();

    clsDoublyLinkedList<int> *N2 = MydblLinkedList.find(4);
    MydblLinkedList.deleteNode(N2);
    std::cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.printList();

    MydblLinkedList.deleteFirstNode();
    std::cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.printList();

    std::cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.deleteLastNode();
    MydblLinkedList.printList();

    std::cout << "\nNumber of items in the linked list = " << MydblLinkedList.size();

    if (MydblLinkedList.isEmpty())
        std::cout << "\n\nYes List is Empty.\n";
    else 
        std::cout << "\n\nNo List is not Empty.\n";

    MydblLinkedList.reverse();

    std::cout << "\nLinked List Contenet after reverse:\n";
    MydblLinkedList.printList();

    return (0);
}
