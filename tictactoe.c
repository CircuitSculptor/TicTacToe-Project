/* Group Project - Tic Tac Toe
 * Simon Hurney
 * 29/02/24
 */

#include <math.h>
#include <stdio.h>

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
