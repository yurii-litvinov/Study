#include <iostream>

#include "calculator.h"

void main()
{
	Calculator calc;
	calc.push(1);
	calc.push(2);
	calc.push(3);
	calc.add();
	calc.multiply();
	std::cout << calc.result();
}