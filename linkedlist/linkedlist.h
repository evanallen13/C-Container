#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Linked list node structure
struct LinkedList {
    int data;
    struct LinkedList* next;
};

// Function declarations (prototypes)
struct LinkedList* createLinkedList(int data);
void freeLinkedList(struct LinkedList* head);

#endif
