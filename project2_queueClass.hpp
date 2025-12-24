#pragma once

#include <iostream>
#include "project1_doublyLinkedListClass.hpp"

template <class data> class clsQueue
{

private:
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
};
