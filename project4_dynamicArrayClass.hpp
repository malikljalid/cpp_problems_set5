#pragma once

#include <iostream>

template <class data> class clsDynamicArray
{
protected:
    int _Size = 0;
   

public:
    data* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new data[_Size];
    }

    ~clsDynamicArray()
    {
        delete[]  OriginalArray;
    }

    bool SetItem(int index, data Value)
    {
        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;

        return true;
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);
    }

    void PrintList()
    {

        for (int i = 0; i <= _Size - 1; i++)
        {
            std::cout << OriginalArray[i] << " ";
        }

        std::cout << "\n";

    }
};
