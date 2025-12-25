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

    return (0);
}
