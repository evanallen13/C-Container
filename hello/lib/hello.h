#ifndef HELLO_H

typedef struct {
    int number;
    char word[5];
} HelloConfig;

void hello();
void reverse(char* str);

#endif