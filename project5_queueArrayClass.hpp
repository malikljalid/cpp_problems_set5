#pragma once

#include <iostream>
#include "project4_dynamicArrayClass.hpp"

template <class data> class clsQueue
{

protected:
	clsDynamicArray <data> _MyList;

public:

	void push(data Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

   void print()
	{
		_MyList.PrintList();
	}

	int size()
	{
		return _MyList.Size();
	}

	bool isEmpty()
	{
		return _MyList.IsEmpty();
	}

	data front()
	{
		return _MyList.GetItem(0);
	}

	data back()
	{
		return _MyList.GetItem(size() - 1);
    }

    data getItem(int index)
    {
        return _MyList.GetItem(index);
    }

    void reverse(void)
    {
        return _MyList.Reverse();
    }

    bool updateItem(int index, data value)
    {
        return _MyList.SetItem(index, value);
    }

    void insertAfter(int index, data value)
    {
        _MyList.InsertAfter(index, value);
    }

    void insertAtFront(data value)
    {
        _MyList.InsertAtBeginning(value);
    }

    void insertAtBack(data value)
    {
        _MyList.InsertAtEnd(value);
    }

    void clear(void)
    {
        _MyList.Clear();
    }
};
