#pragma once


#ifndef  _GENERIC_LINKEDLIST_H_
#define  _GENERIC_LINKEDLIST_H_

#include <memory>
#include <iostream>
#include <string>



template <typename T>
class LinkledList
{
private:
	T _value;
	LinkledList* _nextNode;

public:
	LinkledList() { _nextNode = NULL; }
	LinkledList(T value) { _value = value }
	T getvalue() { return _value; }
	LinkledList* getNextNode() { return _nextNode; }
	int getListSize(LinkledList* firstNode)
	{
		int count = 0;
		while (firstNode != Null)
		{
			count++;
			firstNode = firstNode->_nextNode;
		}
		return count;
	}
};

#endif // ! _GENERIC_LINKEDLIST_H_
