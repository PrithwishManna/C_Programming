#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random number between 1 and 6
int rollDice() {
    return (rand() % 6) + 1; 
}

int main() {
    // Seed random number generator
    srand(time(0));

    printf("Random numbers between 1 and 6:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", rollDice());
    }

    printf("\n");
    return 0;
}

