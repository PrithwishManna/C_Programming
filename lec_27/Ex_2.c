#include <stdio.h>

int countFlips(int a, int b) {
   
    int diff = a ^ b;				// So, diff becomes a new integer where a 1 exists only in the positions where a and b had different bits.
    int count = 0;
    unsigned int u_diff = (unsigned int)diff;

    while (u_diff > 0) {
        u_diff = u_diff & (u_diff - 1);		// The line has a very specific effect: it clears the single rightmost '1' bit.
        count++;
    }
    
    return count;
}

int main() {
    
    int a1 = 5, b1 = 3;
    printf("Bits to flip between %d and %d: %d\n", a1, b1, countFlips(a1, b1));

    int a2 = 10, b2 = 13;
    printf("Bits to flip between %d and %d: %d\n", a2, b2, countFlips(a2, b2));

    int a3 = 7, b3 = 12;
    printf("Bits to flip between %d and %d: %d\n", a3, b3, countFlips(a3, b3));

    return 0;
}