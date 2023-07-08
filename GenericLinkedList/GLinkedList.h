#pragma once


#ifndef  _GENERIC_LÝNKEDLÝST_H_
#define  _GENERIC_LÝNKEDLÝST_H_

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
	T getvalue() { return _value; }
	LinkledList* getNextNode() { return _nextNode; }
	LinkledList() { _nextNode = NULL; }
	LinkledList(T value) { _value = value   }

};










#endif // ! _GENERIC_LÝNKEDLÝST_H_
