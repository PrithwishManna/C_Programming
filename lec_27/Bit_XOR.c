#include <stdio.h>

int main() {
    int a = 10;             // Binary -> 0000 1010
    int b = 13;             // Binary -> 0000 1101
    int c = a ^ b;          // Binary -> 0000 0111 -> Decimal -> 7
    
    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
    printf("Value of a^b: %d\n", c);

    return 0;
}

/* Trick:   0 ^ 0 = 0
            0 ^ 1 = 1
            1 ^ 0 = 1
            1 ^ 1 = 0 */