#include <stdio.h>
#include "linkedlist.h"

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    struct LinkedList* list = arrayToLinkedList(arr, 5);

    // Print linked list
    struct LinkedList* current = list;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    freeLinkedList(list);
    return 0;
}
