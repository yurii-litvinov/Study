#pragma once

template <typename T>
class IStack
{
public:
	virtual void push(T value) = 0;

	virtual T pop() = 0;

	virtual T top() const = 0;
};