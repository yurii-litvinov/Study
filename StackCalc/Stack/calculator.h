#pragma once
#include "IStack.h"

/// Stack calculator.
template <class T>
class Calculator
{
public:
	Calculator(IStack<T> &stack);

	~Calculator();

	/// Adds two values on top of the stack, 
	/// places result back on stack.
	void add();

	/// Subtracts two values on top of the stack, 
	/// places result back on stack.
	void subtract();

	void multiply();
	
	void divide();
	
	void push(T value);
	
	T result() const;
private:
	IStack<T> &stack;
};

template <class T>
Calculator<T>::Calculator(IStack<T> &stack)
	: stack(stack)
{
}

template <class T>
Calculator<T>::~Calculator()
{
}

template <class T>
void Calculator<T>::add()
{
	T first = stack.pop();
	T second = stack.pop();
	stack.push(first + second);
}

template <class T>
void Calculator<T>::subtract()
{
	T first = stack.pop();
	T second = stack.pop();
	stack.push(second - first);
}

template <class T>
void Calculator<T>::multiply()
{
	T first = stack.pop();
	T second = stack.pop();
	stack.push(first * second);
}

template <class T>
void Calculator<T>::divide()
{
	T first = stack.pop();
	T second = stack.pop();
	stack.push(second / first);
}

template <class T>
void Calculator<T>::push(T value)
{
	stack.push(value);
}

template <class T>
T Calculator<T>::result() const
{
	return stack.top();
}