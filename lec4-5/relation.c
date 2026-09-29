#include <stdio.h>

int main() {
    int i=1,j=2,k=-7,A,B,C,D,E;
    float x = 7e+33, y=0.001;
    char c = 'w';
    A = 'a' + 1< c;                  // ('a' + 1) < c == 65+1<67 == 1(true)
    B = -i -5 * j >= k + 1;          // ((-i -5) * j) >= (k + 1) == (-6*2)>= -6 == -12>= -6 == 0(false)
    C = 3 < j || j < 5;              // (3 < j) || (j < 5) == 0 || 1 == 1(true)
    D = x - 3.333 <= x + y;          // (x - 3.333) <= (x + y) == 1(true)
    E = x < x + y;		     //  x < (x + y) == 0(false)
    printf("Your result of A : %d\n", A);
    printf("Your result of B : %d\n", B);
    printf("Your result of C : %d\n", C);
    printf("Your result of D : %d\n", D);
    printf("Your result of D : %d\n", E);
    return 0;
}