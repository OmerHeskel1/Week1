#include "Utils.h"
#include "Stack.h"
#include <iostream>

int* reverse10()
{
	int* tempArr = new int[10];
	Stack s;
	initStack(&s);

	for (int i = 0; i < 10; i++)
	{
		std::cin >> tempArr[i];
		push(&s, tempArr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		tempArr[i] = pop(&s);
	}

	cleanStack(&s);
	return tempArr;
}
