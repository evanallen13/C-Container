#include "linkedlist.h"
#include <stdlib.h> 

#include <stdlib.h>
#include "linkedlist.h"

struct LinkedList* createLinkedList(int data) {
    struct LinkedList* list = malloc(sizeof(struct LinkedList));
    if (list == NULL) {
        return NULL; // Memory allocation failed
    }
    list->data = data;
    list->next = NULL;
    return list;
}

void freeLinkedList(struct LinkedList* head) {
    struct LinkedList* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
