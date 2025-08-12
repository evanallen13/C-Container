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

struct LinkedList* arrayToLinkedList(int *dataArray, int length) {
    if (length <= 0) return NULL;

    struct LinkedList* head = createLinkedList(dataArray[0]);
    if (head == NULL) return NULL;

    struct LinkedList* current = head;
    for (int i = 1; i < length; i++) {
        current->next = createLinkedList(dataArray[i]);
        if (current->next == NULL) {
            freeLinkedList(head);
            return NULL;
        }
        current = current->next;
    }
    return head;
}

void freeLinkedList(struct LinkedList* head) {
    struct LinkedList* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
