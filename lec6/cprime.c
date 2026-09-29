#include <stdio.h>
#include <math.h> 

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int number;
    int choice;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number <= 0) {
        printf("Invalid input. Please enter a POSITIVE integer: ");
        scanf("%d", &number);
    }
    do {
        printf("\n-----------------------------------\n");
        printf("Current number: %d\n", number);
        printf("1. Check if the number is prime\n");
        printf("2. Enter a new number\n");
        printf("3. Exit\n");
        printf("-----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isPrime(number)) {
                    printf("\n=> Result: %d is a prime number.\n", number);
                } else {
                    printf("\n=> Result: %d is NOT a prime number.\n", number);
                }
                break;

            case 2:
                printf("Enter a new positive integer: ");
                scanf("%d", &number);
                while (number <= 0) {
                    printf("Invalid input. Please enter a POSITIVE integer: ");
                    scanf("%d", &number);
                }
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please select an option from 1 to 3.\n");
                break;
        }

    } while (choice != 3);

    return 0;
}
