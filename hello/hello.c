#include "hello.h"
#include <stdio.h>

HelloConfig helloConfig = {1, "World"};

void hello() {
    printf("Hello, %s!! \n", helloConfig.word);
}