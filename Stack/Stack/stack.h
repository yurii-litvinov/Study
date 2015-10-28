#pragma once

/// Represents stack containter.
class Stack
{
public:
	Stack();
	~Stack();
	void push(int value);
	int pop();
	int top() const;

private:
	/// Internal class for representing stack element.
	class StackElement 
	{
	public:
		StackElement(int value, StackElement *next);
		~StackElement();
		int getValue() const;
		StackElement *getNext() const;

	private:
		int value;
		StackElement *next;
	};
	StackElement *head;
};

//Stack *top = nullptr;

