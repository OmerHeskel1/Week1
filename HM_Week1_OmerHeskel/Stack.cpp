#include "Stack.h"
#include <iostream>

void initStack(Stack* s)
{
	initList(&(s->list));
}

void cleanStack(Stack* s)
{
	cleanList(&(s->list));
}

void push(Stack* s, unsigned int element)
{
	addToHead(&(s->list), element);
}

int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return -1;
	}
	return removeFromHead(&(s->list));
}

bool isEmpty(Stack* s)
{
	return isListEmpty(&(s->list));
}

bool isFull(Stack* s)
{
	return false;
}
