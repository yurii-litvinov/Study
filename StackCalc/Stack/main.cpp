#include <iostream>

#include "calculator.h"
#include "arrayStack.h"
#include "stack.h"
#include "complex.h"

void main()
{
	/*Stack<char> stackForChars;
	Stack<int> stackForInts;
	Stack<Stack<int>> stackForStacks;*/

	ArrayStack<int> arrayStackForInts;
	arrayStackForInts.push(1);
	std::cout << arrayStackForInts.top() << std::endl;
	arrayStackForInts.pop();

	Stack<Complex> *stack = new Stack<Complex>();
	Calculator<Complex> calc(*stack);
	calc.push({ 1, 0 });
	calc.push({ 1, 1 });
	calc.push({ 3, -5 });
	calc.add();
	calc.add();
	std::cout << calc.result();
	delete stack;
}