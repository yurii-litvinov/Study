#include "calculator.h"

void Calculator::add()
{
	int first = stack.pop();
	int second = stack.pop();
	stack.push(first + second);
}

void Calculator::subtract()
{
	int first = stack.pop();
	int second = stack.pop();
	stack.push(second - first);
}

void Calculator::multiply()
{
	int first = stack.pop();
	int second = stack.pop();
	stack.push(first * second);
}

void Calculator::divide()
{
	int first = stack.pop();
	int second = stack.pop();
	stack.push(second / first);
}

void Calculator::push(int value)
{
	stack.push(value);
}

int Calculator::result() const
{
	return stack.top();
}