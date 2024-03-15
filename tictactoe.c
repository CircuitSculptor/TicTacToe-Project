/*
 * Tic Tac Toe Project - C/C++ Programming
 * Simon and Bartek
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printTiles(char tiles[3][3]); // function prototype to print array
int WinChecker(char tiles[3][3],
               char Option);   // prototype for checking 3 in a row
void userGo(char tiles[3][3]); // prototype for users go
void cpuGo(char tiles[3][3]);  // prototype for computers go
int main() {
  const int ROW = 3;
  const int COL = 3;
  int userScore = 0;
  int cpuScore = 0;
  char tiles[ROW][COL]; // setting array to 3x3 grid using const ints
  int i, j;
  int cPlay = 1;
  char playAgain;
  char userName[15];
  srand(time(NULL)); // seeded rand so cpu picks different selection each go
  do {
    // populating the array with empty space
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        tiles[i][j] = ' ';
      }
    }
    printTiles(tiles);
    for (i = 0; i < 9;
         i++) { // loop to the max number of goes before someone must win
      if (i % 2 == 0) {
        userGo(tiles); // calling users go if num is not odd.
      } else {
        cpuGo(tiles);
      }

      // checking through array to see if passed option has won.
      if (WinChecker(tiles, 'x')) {
        printf("Player has won!\n");
        userScore++;
        break;
      } else if (WinChecker(tiles, 'o')) {
        printf("CPU has won!\n");
        cpuScore++;
        break;
      }
    }

    printf("Would you like to play again y/n : \n");
    scanf(" %c", &playAgain);
    switch (playAgain) {

    case 'y':
      cPlay = 1;
      break;

    case 'n':
      cPlay = 0;
      printf("Thanks for playing! \n");
      printf("Your score %d\n", userScore);
      printf("Cpu score %d\n", cpuScore);
      break;

    default:
      cPlay = 1;
      break;
    }

  } while (cPlay != 0);
  return 0;
}

void printTiles(char tiles[3][3]) {
  printf("\n");
  printf("+---+---+---+\n"); // printing out custom display for array .
  printf("| %c | %c | %c |\n", tiles[0][0], tiles[0][1], tiles[0][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[1][0], tiles[1][1], tiles[1][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[2][0], tiles[2][1], tiles[2][2]);
  printf("+---+---+---+\n");
  printf("\n");
}

// function to check for 3 of option variable in a row
int WinChecker(char tiles[3][3], char Option) {

  for (int i = 0; i < 3; ++i) { // This loop checks rows for the same characters
    if (tiles[i][0] == Option && tiles[i][1] == Option &&
        tiles[i][2] == Option) {
      return 1;
    }
  }
  for (int j = 0; j < 3;
       ++j) { // This loop checks the  columns for the same characters
    if (tiles[0][j] == Option && tiles[1][j] == Option &&
        tiles[2][j] == Option) {
      return 1;
    }
  }

  if ((tiles[0][0] == Option && tiles[1][1] == Option &&
       tiles[2][2] == Option) ||
      (tiles[0][2] == Option && tiles[1][1] == Option &&
       tiles[2][0] == Option)) {
    return 1; // This if statement checks the 2 diagonals for the same
              // charachers
  }
  return 0;
}

void userGo(char tiles[3][3]) {
  int row, column;
  // setting row and column to user input
  printf("Please enter row selection (0-2): ");
  scanf("%d", &row);
  printf("\n");
  printf("Enter column (0-2): ");
  scanf("%d", &column);
  printf("\n");
  // checking to see if space is free
  if (tiles[row][column] == ' ') {
    tiles[row][column] = 'x';
  } else {
    // telling user space is taken, allowing them to go again
    printf("Space taken go again \n");
    userGo(tiles);
  } // prints out display after choice
  // printTiles(tiles);
}

void cpuGo(char tiles[3][3]) {
  int row, col;
  row = rand() % 3; // random number between 0 - 3
  col = rand() % 3;
  // making sure CPU does not select a filled element
  if (tiles[row][col] == 'x' || tiles[row][col] == 'o') {
    cpuGo(tiles);

  } else {
    tiles[row][col] = 'o';
  }
  // Print the updated grid
  printTiles(tiles);
}
