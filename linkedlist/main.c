#include <stdio.h>
#include "linkedlist.h"

int main(void) {
    int n = 15;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    struct LinkedList* list = arrayToLinkedList(arr, sizeof(arr) / sizeof(arr[0]));

    struct LinkedList* current = list;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    freeLinkedList(list);
    return 0;
}
