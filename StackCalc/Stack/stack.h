#pragma once

#include <iostream>
#include "IStack.h"

/// Represents stack containter.
template<typename T>
class Stack : public IStack<T>
{
public:
	Stack() : head(nullptr) {}
	
	~Stack()
	{
		while (head != nullptr)
		{
			pop();
		}
	}

	void push(T value)
	{
		StackElement *newElement = new StackElement(value, head);
		head = newElement;
	}

	T pop()
	{
		if (head == nullptr)
		{
			std::cout << "the stack is empty\n";
			return T();
		}
		else
		{
			StackElement *lastElement = head->getNext();
			T returnValue = head->getValue();
			delete head;
			head = lastElement;
			return returnValue;
		}
	}

	T top() const
	{
		return head->getValue();
	}

private:
	/// Internal class for representing stack element.
	class StackElement 
	{
	public:
		StackElement(T value, StackElement *next)
			: value(value), next(next)
		{
		}

		~StackElement()
		{
		}

		T getValue() const
		{
			return value;
		}

		StackElement *getNext() const
		{
			return next;
		}

	private:
		T value;
		StackElement *next;
	};
	StackElement *head;
};


