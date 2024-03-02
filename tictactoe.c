/* Group Project - Tic Tac Toe
<<<<<<< HEAD
 * Bartec and Simon
 * 01/03/24
=======
 * Simon Hurney
 * 29/02/24
>>>>>>> main
 */

#include <math.h>
#include <stdio.h>

<<<<<<< HEAD
void printTiles(char tiles[][3], int ROW,
                int COL); // function prototype to print array

int main() {
  const int ROW = 3;
  const int COL = 3;
  char tiles[ROW][COL]; // setting array to 3x3 grid using const ints
  int i, j;

  for (i = 0; i < ROW; i++) { // sample code to populate grid.
    for (j = 0; j < COL; j++) {
      tiles[i][j] = 'x';
    }
  }
  printTiles(tiles, ROW, COL); // calling print function
  return 0;
}
void printTiles(char tiles[][3], int ROW, int COL) {
  printf("+---+---+---+\n"); // printing out custom display for array .
  printf("| %c | %c | %c |\n", tiles[0][0], tiles[0][1], tiles[0][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[1][0], tiles[1][1], tiles[1][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[2][0], tiles[2][1], tiles[2][2]);
  printf("+---+---+---+\n");
}
=======
int main() {

  char array[3][3];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      array[i][j] = 'x';
    }
  }
  printf("| %c | %c | %c |\n", array[0][0], array[0][1], array[0][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", array[1][0], array[1][1], array[1][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", array[2][0], array[2][1], array[2][2]);

  return 0;
}
>>>>>>> main
