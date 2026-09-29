#include <stdio.h>

int main() {
    int i=3,j=3,k=3,P,Q,C,D;
    char c = 'B';
    double x = 0.0, y = 2.3;

    P = i && j && k;

    Q = x || i && j - 3;

    C = i < j || x < y;

    D = c - 1 == 'A' || c + 1 == 'Z';

    printf("Result of P : %d\n", P);

    printf("Result of Q : %d\n", Q);

    printf("Result of C : %d\n", C);

    printf("Result of D : %d\n", D);

    return 0;
}