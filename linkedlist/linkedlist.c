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

struct LinkedList* createLinkedList(int *data_array) {

    struct LinkedList* head = createLinkedList(9);
    // if (head == NULL) {
    //     return NULL;
    // }

    // struct LinkedList* current = head;
    // for (size_t i = 1; i < sizeof(data_array)/sizeof(data_array[0]); i++) {
    //     current->next = createLinkedList(data_array[i]);
    //     if (current->next == NULL) {
    //         freeLinkedList(head); 
    //         return NULL;
    //     }
    //     current = current->next;
    // }
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
