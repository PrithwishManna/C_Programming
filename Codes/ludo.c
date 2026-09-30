#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, guess, randomNumber;

    // Seed the random number generator
    srand(time(0));   //srand(time(0)) → ensures different random numbers each run.

    // Step 1: Ask user for n (>1)
    printf("Enter a number (>1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input! n must be greater than 1.\n");
        return 1;
    }

    // Step 2: Generate a random number between 1 and n
    randomNumber = (rand() % n) + 1;   //rand() % n + 1 → generates a number in range [1, n].

    // Step 3: Ask user to guess
    printf("Guess a number between 1 and %d: ", n);
    scanf("%d", &guess);

    // Step 4: Compare guess with random number
    if (guess == randomNumber) {
        printf("\nCongrats! You have won.\n");
    } else {
        printf("\nSorry, you lost. The correct number was %d.\n", randomNumber);
    }

    return 0;
}

