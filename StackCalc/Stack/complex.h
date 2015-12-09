#pragma once
#include <iostream>

class Complex
{
public:
	Complex() : real(0), imaginary(0) {};

	Complex(int real, int imaginary) : real(real), imaginary(imaginary)
	{}

	Complex operator + (Complex const &second)
	{
		return Complex(real + second.real, imaginary + second.imaginary);
	}

	Complex operator - (Complex const &second)
	{
		return Complex(real - second.real, imaginary - second.imaginary);
	}

	Complex operator * (Complex const &second)
	{
		return Complex(real * second.real - imaginary * second.imaginary,
			real * second.imaginary + imaginary * second.real);
	}

	Complex operator / (Complex const &second)
	{
		return Complex(0, 0);
	}
	friend std::ostream &operator << (std::ostream &stream, Complex const &complex);
private:
	int real;
	int imaginary;
};


std::ostream &operator << (std::ostream &stream, Complex const &complex)
{
	stream << complex.real << ' ' << complex.imaginary << 'i';
	return stream;
}