//Bartek is doing the random function generator and a function to check if the player has won

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandGen() {

    int randValue = rand() % 11;

    if (randValue % 2 == 0) {
        return 'X';
    }
    else {
        return 'O';
    }
}

int main() {

    srand(time(NULL));

    char result = RandGen();
    for (int i = 0; i < 10; i++) {
        printf("Random option is: %c\n", result);
    }
    return 0;
}

//int WinChecker() {


//}

