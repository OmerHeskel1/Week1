#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* list)
{
    list->head = nullptr;
}

void addToHead(LinkedList* list, int value)
{
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = list->head;
    list->head = newNode;
}

int removeFromHead(LinkedList* list)
{
    if (isListEmpty(list))
    {
        return -1;
    }

    Node* temp = list->head;
    int poppedValue = temp->value;
    list->head = list->head->next;

    delete temp;
    return poppedValue;
}

bool isListEmpty(const LinkedList* list)
{
    return list->head == nullptr;
}

void cleanList(LinkedList* list)
{
    while (!isListEmpty(list))
    {
        removeFromHead(list);
    }
}
