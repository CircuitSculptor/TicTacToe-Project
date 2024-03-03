// Bartek is doing the random character (X or O) generator and a function to check if the player has won

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandGen() {

    int randValue = rand() % 11; // Creates a random number between 0 and 10

    if (randValue % 2 == 0) {
        return 'X'; // Returns a X if the number is even
    }
    else {
        return 'O'; // Returns a O if the number is odd
    }
}

int WinChecker(char board[3][3], char Option) {

    for (int i = 0; i < 3; ++i) { // This loop checks the 3 rows for the same characters
        if (board[i][0] == Option && board[i][1] == Option && board[i][2] == Option) {
            return 1;
        }
    }
    for (int j = 0; j < 3; ++j) { // This loop checks the 3 columns for the same characters
        if (board[0][j] == Option && board[1][j] == Option && board[2][j] == Option) {
            return 1;
        }
    }
    if ((board[0][0] == Option && board[1][1] == Option && board[2][2] == Option) ||
        (board[0][2] == Option && board[1][1] == Option && board[2][0] == Option)) {
        return 1; // This if statement checks the 2 diagonals for the same charachers
    }
    return 0;
}

int main() {

    srand(time(NULL));

    char result = RandGen();
    for (int i = 0; i < 10; i++) {
        printf("Random option is: %c\n", result);
    }


    //Test grid
    char TicTacToeBoard[3][3] = {
    {'X', 'O', 'O'},
    {'O', 'X', 'O'},
    {'X', 'O', 'X'}
    };

    if (WinChecker(TicTacToeBoard, 'X')) {
        printf("Player 'X' has won!\n");
    }
    else {
        printf("Player 'O' has won!\n");
    }
    return 0;
}


