#include <stdio.h>
#include <stdlib.h>

int* reverse(int arr[], int size) {
    int* rev = malloc(size * sizeof(int));
    if (rev == NULL) {
        perror("malloc failed");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - 1 - i];
    }
    return rev;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* arr2 = reverse(arr, size);

    printf("Count: %d\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(arr2); // Clean up allocated memory
    return 0;
}
