#include <stdio.h>
#include <stdlib.h>

void add(int a, int b) {
    printf("Result: %d\n", a + b);
}
void subtract(int a, int b) {
    printf("Result: %d\n", a - b);
}
void divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return;
    }
    printf("Result: %d\n", a / b);
}
void multiply(int a, int b) {
    printf("Result: %d\n", a * b);
}

int main(void) {
    int a, b;
    printf("Enter first integers: ");
    scanf("%d", &a);
    printf("Enter second integers: ");
    scanf("%d", &b);

    char operation;
    printf("Enter operation (+, -, x, /): ");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
            add(a, b);
            break;
        case '-':
            subtract(a, b);
            break;
        case 'x':
            multiply(a, b);
            break;
        case '/':
            divide(a, b);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    return 0;
}