#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
	Stack s;
	initStack(&s);

	for (unsigned int i = 0; i < size; i++)
	{
		push(&s, nums[i]);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		nums[i] = pop(&s);
	}

	cleanStack(&s);
}
