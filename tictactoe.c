
#include <math.h>
#include <stdio.h>

void printTiles(char tiles[][3], int ROW,
                int COL); // function prototype to print array

int main() {
  const int ROW = 3;
  const int COL = 3;
  char tiles[ROW][COL]; // setting array to 3x3 grid using const ints
  int i, j;

  for (i = 0; i < 9;
       i++) { // loop to the max number of goes before someone must win
    if (i % 2 == 0) {
      // Playergo;
    } else {
      // cpu go;
    }

    for (i = 0; i < ROW; i++) { // sample code to populate grid.
      for (j = 0; j < COL; j++) {
        tiles[i][j] = 'x';
      }
    }
    printTiles(tiles, ROW, COL); // calling print function
  }
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
