#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->max_size = size;
	q->count = 0;
	q->head = 0;
	q->tail = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->arr;
	q->arr = nullptr;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}
	q->arr[q->tail] = newValue;
	q->tail = (q->tail + 1) % q->max_size;
	q->count++;
}

int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1;
	}
	int value = q->arr[q->head];
	q->head = (q->head + 1) % q->max_size;
	q->count--;
	return value;
}

bool isEmpty(Queue* s)
{
	return s->count == 0;
}

bool isFull(Queue* s)
{
	return s->count == s->max_size;
}
