#include <stdio.h>

int main() {
    int a = 10;
    int b = ~a;
    printf("Value of a : %d\n", a);
    printf("Complement of a : %d\n", b);

    return 0;
}

// Trick: If a = n, then ~a = -(n + 1) for all n belongs to Z