//Function for the random location for the cpu go

int main() {

    srand(time(NULL));  //Random function
}

void selectRandomLocation(char grid[SIZE][SIZE], char symbol) {
    int row, col;

    do {
        row = rand() % SIZE;
        col = rand() % SIZE;
    } while (grid[row][col] != ' '); // Repeat if the location is not empty

    grid[row][col] = symbol;    // Place the symbol at the selected location

    // Print the updated grid
    printf("Updated Grid:\n");
    printGrid(tiles);
}