/* Group Project - Tic Tac Toe
 * Bartec and Simon
 * 01/03/24
 */

#include <math.h>
#include <stdio.h>

void printTiles(char tiles[][3], int ROW, int COL);

int main() {
  const int ROW = 3;
  const int COL = 3;
  char tiles[ROW][COL];
  int i, j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      tiles[i][j] = 'x';
    }
  }
  printTiles(tiles, ROW, COL);
  return 0;
}
void printTiles(char tiles[][3], int ROW, int COL) {
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[0][0], tiles[0][1], tiles[0][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[1][0], tiles[1][1], tiles[1][2]);
  printf("+---+---+---+\n");
  printf("| %c | %c | %c |\n", tiles[2][0], tiles[2][1], tiles[2][2]);
  printf("+---+---+---+\n");
}
