#include <stdio.h>
#include <stdlib.h>

void print_board(char arr[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        char *row = arr[i];
        printf(" %c | %c | %c \n", row[0], row[1], row[2]);
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
}

int* turn(char arr[3][3], int player) {
    static int position[2] = {-1, -1};
    int found = 0;
    int move;
    printf("Player %d enter your move (number):\n", player);
    scanf("%d", &move);

    for (int i = 0; i < 3; i++)  {
        
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == '0' + move) {
                position[0] = i;
                position[1] = j;
                found = 0; 
                break;
            }
        }
    }

    return position;
}

int main(void) {
    int player = 1; 
    char arr[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1: X\n");
    printf("Player 2: O\n");
    print_board(arr);

    for (int i = 0; i < 9; i++) {
        int* players_turn = turn(arr, player);
        int x = players_turn[0];
        int y = players_turn[1];

        arr[x][y] = (player == 1) ? 'X' : 'O';
        print_board(arr);
        player = (player == 1) ? 2 : 1; // Switch player
    }
    printf("\n");

    return 0;
}