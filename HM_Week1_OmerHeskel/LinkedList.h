#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    int value;
    struct Node* next;
} Node;

typedef struct LinkedList
{
    Node* head;
} LinkedList;

void initList(LinkedList* list);
void addToHead(LinkedList* list, int value);
int removeFromHead(LinkedList* list); // returns the removed value, or -1 if empty
bool isListEmpty(const LinkedList* list);
void cleanList(LinkedList* list);

#endif /* LINKEDLIST_H */
