// Check a number is prime or not //

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;     			// assume prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;   				// numbers <= 1 are not prime
    }
    else {
        for (i = 2; i <= n / 2; i++) {   	// check divisibility
            if (n % i == 0) {
                isPrime = 0;   			// found a divisor → not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

