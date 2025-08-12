#include "hello.h"
#include <stdio.h>

HelloConfig helloConfig = {1, "World"};

void hello() {
    printf("Hello, %s!! \n", helloConfig.word);
}

void reverse(char* str){
    char reversed[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        reversed[j++] = str[i];
    }
    for (int i = j - 1; i >= 0; i--) {
        putchar(reversed[i]);
    }
    printf("\n");
}

