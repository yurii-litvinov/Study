#include "stack.h"
/*
#include <iostream>

Stack::Stack()
	: head(nullptr)
{
}

Stack::~Stack()
{
	while (head != nullptr)
	{
		pop();
	}
}

void Stack::push(int value)
{
	StackElement *newElement = new StackElement(value, head);
	head = newElement;

}

int Stack::pop()
{
	if (head == nullptr)
	{
		std::cout << "the stack is empty\n";
		return 0;
	}
	else
	{
		StackElement *lastElement = head->getNext();
		int returnValue = head->getValue();
		delete head;
		head = lastElement;
		return returnValue;
	}
}

int Stack::top() const
{
	return head->getValue();
}

Stack::StackElement::StackElement(int value, StackElement *next)
{
	this->value = value;
	this->next = next;
}

Stack::StackElement::~StackElement()
{

}

int Stack::StackElement::getValue() const
{
	return value;
}

Stack::StackElement *Stack::StackElement::getNext() const
{
	return next;
}
*/
//Stack<int> ololo;