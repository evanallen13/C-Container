#include <stdio.h>
#include <stdlib.h>

int* return_int_array() {
    static int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    return arr;
}

int main(void) {
    printf("JSON module initialized.\n");

    int size = 10;
    int* myArray = return_int_array(size);

    // for (int i = 0; i < size; i++) {
    //     printf("%d ", myArray[i]);
    // }
    // printf("\n");

    // free(myArray);
    return 0;
}