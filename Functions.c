//Bartek is doing the random function generator and a function to check if the player has won

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    RandGen();

    return 0;
}


int RandGen() {
     
    srand(time(NULL));

    char result = (rand() % 2 == 0) ? 'X' : 'O';
    printf("Random option is: %c\n", result);

    return 0;
}

int WinChecker() {


}

