#include <stdio.h>
#include <stdlib.h>

void add(int a, int b) {
    printf("Result: %d\n", a + b);
}
void subtract(int a, int b) {
    printf("Result: %d\n", a - b);
}

int main(void) {
    int a, b;
    printf("Enter first integers: ");
    scanf("%d", &a);
    printf("Enter second integers: ");
    scanf("%d", &b);

    char operation;
    printf("Enter operation (+ or -): ");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
            add(a, b);
            break;
        case '-':
            subtract(a, b);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    return 0;
}