
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printTiles(char tiles[3][3]); // function prototype to print array
int WinChecker(char tiles[3][3], char Option);
void userGo(char tiles[3][3]);
int main() {
  const int ROW = 3;
  const int COL = 3;
  char tiles[ROW][COL]; // setting array to 3x3 grid using const ints
  int i, j;
  char userletter = 'x';

  for (i = 0; i < 9;
       i++) { // loop to the max number of goes before someone must win
    if (i % 2 == 0) {
      // userGo();
    } else {
      // cpu go;
    }

    for (i = 0; i < ROW; i++) { // sample code to populate grid.
      for (j = 0; j < COL; j++) {
        tiles[i][j] = 'x';
      }
    }
  }

  // printTiles(tiles);// calling print function
  if (WinChecker(tiles, 'x')) {
    printf("Player 'X' has won!\n");
  }
  if (WinChecker(tiles, 'o')) {
    printf("Player 'O' has won!\n");
  }
  return 0;
}

void printTiles(char tiles[][3]) {
  printf("+---+---+---+\n"); // printing out custom display for array .
  printf("| %c | %c | %c |\n", tiles[0][0], tiles[0][1], tiles[0][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[1][0], tiles[1][1], tiles[1][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[2][0], tiles[2][1], tiles[2][2]);
  printf("+---+---+---+\n");
}

int WinChecker(char board[3][3], char Option) {

  for (int i = 0; i < 3;
       ++i) { // This loop checks the 3 rows for the same characters
    if (board[i][0] == Option && board[i][1] == Option &&
        board[i][2] == Option) {
      return 1;
    }
  }
  for (int j = 0; j < 3;
       ++j) { // This loop checks the 3 columns for the same characters
    if (board[0][j] == Option && board[1][j] == Option &&
        board[2][j] == Option) {
      return 1;
    }
  }
  if ((board[0][0] == Option && board[1][1] == Option &&
       board[2][2] == Option) ||
      (board[0][2] == Option && board[1][1] == Option &&
       board[2][0] == Option)) {
    return 1; // This if statement checks the 2 diagonals for the same
              // charachers
  }
  return 0;
}

void userGo(char tiles[3][3]) {
  int i, j, row, column;

  printf("Please enter row selection");
  scanf("%d", &row);
  printf("Enter columns");
  scanf("%d", &column);
  tiles[row][column] = 'x';
}
