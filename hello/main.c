#include <stdio.h>
#include "./lib/hello.h"
#include <stdlib.h>

void main(){
    hello();

    char str[] = "Hello GeeksforGeeks";
    reverse(str);
    
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("2D Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d \n", arr[i][j]);
        }
    } 
}