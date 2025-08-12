#include <stdio.h>
#include "linkedlist.h"

int main(void) {
    struct LinkedList* list = createLinkedList(44);
    if (list == NULL) {
        printf("Failed to create linked list.\n");
        return 1;
    }

    // list->data = 42;
    list->next = createLinkedList(33);

    printf("Linked list created! Data = %d\n", list->data);

    freeLinkedList(list);
    return 0;
}
