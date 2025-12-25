#include "project4_dynamicArrayClass.hpp"

int main()
{

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);
    
    std::cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty() ;
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    std::cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(10);
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    std::cout << "\nArray Items after resize to 10 : \n";
    MyDynamicArray.PrintList();

    std::cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << "\n";


    MyDynamicArray.Reverse();

    std::cout << "\nArray Items after reverse: \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();

    std::cout << "\nArray Items after clear: \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteItemAt(2);
    std::cout << "\nArray Items after deleting item(2): \n";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.DeleteFirstItem();
    std::cout << "\nArray Items after deleting FirstItem: \n";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteLastItem();
    std::cout << "\nArray Items after deleting LastItem: \n";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    int Index = MyDynamicArray.Find(30);
    if (Index ==-1)
        std::cout << "\nItem was not Found :-(\n ";
    else
        std::cout << "\n30 is found at index : " << Index;
    
    MyDynamicArray.DeleteItem(30);
    std::cout << "\n\nArray Items after deleting 30:";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    return (0);
}
