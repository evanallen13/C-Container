#include <stdio.h>

void print_board(char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        char *row = arr[i];
        printf(" %c | %c | %c \n", row[0], row[1], row[2]);
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
}

int main(void) {
    char arr[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    printf("Welcome to Tic Tac Toe!\n");
    printf("Here is the board:\n");
    print_board(arr);

    arr[0][0] = 'X'; // Example move
    printf("\nAfter player X's move:\n");
    print_board(arr);
    
    return 0;
}
