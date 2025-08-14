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
int check_winner(char arr[3][3]) {
    static int winner = 0;

    // Check Diagonals
    if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] != '1' && arr[0][0] != '2' && arr[0][0] != '3' && arr[0][0] != '4' && arr[0][0] != '5' && arr[0][0] != '6' && arr[0][0] != '7' && arr[0][0] != '8' && arr[0][0] != '9') ||
        (arr[2][0] == arr[1][1] && arr[2][0] == arr[0][2] && arr[2][0] != '1' && arr[2][0] != '2' && arr[2][0] != '3' && arr[2][0] != '4' && arr[2][0] != '5' && arr[2][0] != '6' && arr[2][0] != '7' && arr[2][0] != '8' && arr[2][0] != '9')) {
        winner = 1;
    }
    // Check Rows
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] && arr[i][2]){
            if (arr[i][0] == arr[i][2] && arr[i][0] != '1' && arr[i][0] != '2' && arr[i][0] != '3' && arr[i][0] != '4' && arr[i][0] != '5' && arr[i][0] != '6' && arr[i][0] != '7' && arr[i][0] != '8' && arr[i][0] != '9') {
                winner = 1;
            }
        }
    }
    // Check Columns
    for (int i = 0; i < 3; i++) {
        if (arr[0][i] == arr[1][i] && arr[2][i]) {
            if (arr[0][i] == arr[2][i] && arr[0][i] != '1' && arr[0][i] != '2' && arr[0][i] != '3' && arr[0][i] != '4' && arr[0][i] != '5' && arr[0][i] != '6' && arr[0][i] != '7' && arr[0][i] != '8' && arr[0][i] != '9')
            {
                winner = 1;
            }
        }      
    }
    return winner;
}

void main() {
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
        if (check_winner(arr)) {
            printf("Player %d wins!\n", player);
            return;
        }
        player = (player == 1) ? 2 : 1; // Switch player
    }
    printf("\n");
}