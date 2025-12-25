#pragma once

#include <iostream>

template <class data> class clsDynamicArray
{
protected:
    int     _Size = 0;
    data*   _TempArray;

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

    void Resize(int NewSize)
    {
        if (NewSize < 0)
        {
            NewSize = 0;
        };

        _TempArray = new data[NewSize];

        if (NewSize < _Size)
            _Size = NewSize;

        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize;

        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    data GetItem(int index)
    {
        return OriginalArray[index];
    }


    void  Reverse()
    {

        _TempArray = new data[_Size];

        int counter = 0;

        for (int i = _Size - 1; i >= 0; i--)
        {
            _TempArray[counter] = OriginalArray[i];
            counter++;
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;

    }

    void Clear()
    {
        _Size = 0;
        _TempArray = new data[0];

        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    bool DeleteItemAt(int index)
    {

        if (index >= _Size || index <0)
        {
            return false;
        }

        _Size--;

        _TempArray = new data[_Size];

        //copy all before index
        for (int i = 0; i < index; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        //copy all after index
        for (int i = index + 1; i < _Size + 1; i++)
        {
            _TempArray[i - 1] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;

    }

    void DeleteFirstItem()
    {

        DeleteItemAt(0);

    }

    void DeleteLastItem()
    {

        DeleteItemAt(_Size - 1);
    }

    int Find(data Value)
    {
        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == Value)
            {
                return i;
            }
        }
        return -1;

    }


    bool DeleteItem(data Value)
    {

        int index = Find(Value);

        if (index == -1)
        {
            return false;
        }

        DeleteItemAt(index);
        return true;

    }
};
