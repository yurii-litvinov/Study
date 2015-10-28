#pragma once
#include "stack.h"

/// Stack calculator.
class Calculator
{
public:
	/// Adds two values on top of the stack, 
	/// places result back on stack.
	void add();

	/// Subtracts two values on top of the stack, 
	/// places result back on stack.
	void subtract();

	void multiply();
	
	void divide();
	
	void push(int value);
	
	int result() const;
private:
	Stack stack;
};