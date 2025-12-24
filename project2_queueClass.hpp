#pragma once

#include <iostream>
#include "project1_doublyLinkedListClass.hpp"

template <class data> class clsQueue
{

protected:
	clsDoublyLinkedList <data> _MyList;

public:

	void push(data Item)
	{
		_MyList.insertAtEnd(Item);
	}

	void pop()
	{
		_MyList.deleteFirstNode();
	}

   void print()
	{
		_MyList.printList();
	}

	int size()
	{
		return _MyList.size();
	}

	bool isEmpty()
	{
		return _MyList.isEmpty();
	}

	data front()
	{
		return _MyList.getItem(0);
	}

	data back()
	{
		return _MyList.getItem(size() - 1);
    }

    data getItem(int index)
    {
        return _MyList.getItem(index);
    }

    void reverse(void)
    {
        return _MyList.reverse();
    }

    bool updateItem(int index, data value)
    {
        return _MyList.updateItem(index, value);
    }

    void insertAfter(int index, data value)
    {
        _MyList.insertAfter(index, value);
    }

    void insertAtFront(data value)
    {
        _MyList.insertAtBeginning(value);
    }

    void insertAtBack(data value)
    {
        _MyList.insertAtEnd(value);
    }

    void clear(void)
    {
        _MyList.clear();
    }
};
