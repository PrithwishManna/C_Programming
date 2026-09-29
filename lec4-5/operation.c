#include <stdio.h>

int main() {
    int a=1,b=2,c=3,d=4,A,B,C,D;
    A = a * b / c;          //{(a * b) / c} = 0
    B = a * b % c + 1;      //[{(a * b) % c} +1 ] = 3
    C = ++a * b - c--;      //{(++a * b) - (c--)} = 1
    D = 7- -b * ++d;	    //[7- {(-b) * (++d)}] = 17
    printf("Your result of A : %d\n", A);
    printf("Your result of B : %d\n", B);
    printf("Your result of C : %d\n", C);
    printf("Your result of D : %d\n", D);
    return 0;
}