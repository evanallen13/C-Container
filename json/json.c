#include <stdio.h>
#include <stdlib.h>

void print_board(char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        char *row = arr[i];
        printf(" %c | %c | %c \n", row[0], row[1], row[2]);
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
}

int* turn() {
    static int arr[2] = {0, 1};
    return arr;
}

int main(void) {
    int player = 1; 
    char arr[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    printf("Here is the board:\n");


    for (int i = 0; i < 9; i++) {
        int* players_turn = turn();
        int x = players_turn[0];
        int y = players_turn[1];

        arr[x][y] = (player == 1) ? 'X' : 'O';
        print_board(arr);
        player = (player == 1) ? 2 : 1; // Switch player
    }
    printf("\n");

    // free(myArray);
    return 0;
}