#include <iostream>

struct StackElement {
	int value;
	StackElement *next;
};

struct Stack {
	StackElement *head;
};

void stackPush(Stack *stack, int number)
{
	StackElement *newElement = new StackElement;
	newElement->value = number;
	newElement->next = stack->head;
	stack->head = newElement;
};

int pop(Stack *stack)
{
	if (stack->head == nullptr)
	{
		return -1;
	}

	int value = stack->head->value;
	StackElement *temp = stack->head->next;
	delete stack->head;
	stack->head = temp;
	return value;
}

void deleteStack(Stack *stack)
{
	while (stack->head != nullptr)
	{
		StackElement *temp = stack->head;
		stack->head = stack->head->next;
		delete temp;
	}
}

//struct ListElement;
//
//struct List {
//	ListElement *head;
//};
//
//struct ListElement {
//	int value;
//	ListElement *next;
//	List *list;
//};


void main()
{
	/*ListElement *listElement = new ListElement();
	listElement->value = 1;
	listElement->next = nullptr;

	ListElement *listElement2 = new ListElement();
	listElement2->value = 2;
	listElement2->next = nullptr;

	listElement->next = listElement2;*/

	setlocale(LC_ALL, "Russian");

	Stack stack;
	stack.head = nullptr;

	stackPush(&stack, 1);
	stackPush(&stack, 2);
	stackPush(&stack, 2);
	stackPush(&stack, 2);
	stackPush(&stack, 2);
	stackPush(&stack, 2);

	int head = pop(&stack);

	std::cout << head << std::endl;
	std::cout << pop(&stack) << std::endl;
	std::cout << pop(&stack) << std::endl;

	deleteStack(&stack);

	std::cout<<"Здесь был Ваня"<<std::endl;

}