#include <stdio.h>
                                					// A recursive function to find the factorial of an integer
long long int factorial(int n) {
                               						// Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
                                					// Recursive step: n * factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}
                                					// The main function where the program execution begins
int main() {
    int number;

                                					// Prompt the user to enter a number
    
    printf("Enter a non-negative integer: ");
    
                                					// Read the integer from the user
    
    scanf("%d", &number);

                                					// Check if the number is negative
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
                                					// If the number is non-negative, calculate and print the factorial       
        long long int result = factorial(number);
        printf("Factorial of %d = %lld\n", number, result);
    }

    return 0;                   					// Indicate that the program ended successfully
}
