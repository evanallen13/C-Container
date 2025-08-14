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

int check_winner(char arr[3][3]) {
    // This function can be implemented to check for a winner
    // For now, it is left empty
    return 0; 
}

int* turn(char arr[3][3], int player) {
    // print_board(arr);
    static int result[2] = {-1, -1}; // Initialize result to an invalid position
    int box;
    printf("Player %d, enter the box number (1-9) to place your mark: ", player);
    scanf("%d", &box);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == '1' + (box - 1)) {
                arr[i][j] = (player == 1) ? 'X' : 'O';
                result[0] = i; // Row index
                result[1] = j; // Column index
                return result;
            }
        }
    }

    return result;
}

int main(void) {
    int player = 1; 
    char arr[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    printf("Here is the board:\n");
    for(int i = 0; i <= 9; i++){
        int* turn_result[2] = turn(arr, player);
        // arr[turn_result[0]][turn_result[1]] = (player == 1) ? 'X' : 'O';
        int* turn_result_ptr = turn(arr, player);

        printf("Row: %d, Col: %d\n", turn_result_ptr[0], turn_result_ptr[1]);
        int check = check_winner(arr);
        if (check == 1) {
            printf("Game Over\n");
            break;
        }
        player = (i % 2) + 1;
    }

    
    return 0;
}
