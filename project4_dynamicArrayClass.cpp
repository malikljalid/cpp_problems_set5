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

    return (0);
}
