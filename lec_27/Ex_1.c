// Write a C program to swap two numbers without using a temporary variable. Use bitwise operators to achieve this.


#include <stdio.h>

int main() {
    int a = 10;             			// Binary -> 0000 1010
    int b = 13;             			// Binary -> 0000 1101
    
    printf("Before swapping\n");
    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
    
    a = a ^ b;              			// Binary -> 0000 0111 -> Decimal -> 7
    b = a ^ b;      			//(7 ^ 13) Binary -> 0000 1010 -> Decimal -> 10
    a = a ^ b;      			//(7 ^ 10) Binary -> 0000 1101 -> Decimal -> 13
    
    printf("\nAfter swapping\n");
    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);

    return 0;
}

/* Trick:   0 ^ 0 = 0
            0 ^ 1 = 1
            1 ^ 0 = 1
            1 ^ 1 = 0 */