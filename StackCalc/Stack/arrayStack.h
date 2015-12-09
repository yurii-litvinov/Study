#pragma once
#include "IStack.h"

template <typename T>
class ArrayStack : public IStack<T>
{
public:
	ArrayStack();

	~ArrayStack();

	void push(T value);

	T pop();

	T top() const;

private:
	static const size_t maxSize = 256;

	T array[maxSize];

	short unsigned index;
};

template <typename T>
ArrayStack<T>::ArrayStack()
	: index(-1)
{
}

template <typename T>
ArrayStack<T>::~ArrayStack()
{
}

template <typename T>
void ArrayStack<T>::push(T value)
{
	array[++index] = value;
}

template <typename T>
T ArrayStack<T>::pop()
{
	T result = top();
	index--;
	return result;
}

template <typename T>
T ArrayStack<T>::top() const
{
	if (index >= 0)
	{
		return array[index];
	}
	else
	{
		return 0;
	}
}

