#include<stdio.h>

int main(){
    int a = 7;              // 0000 0111
    int b = a << 2;         // 0001 1100 -> 28
    
    printf("Value of original a : %d\n", a);
    printf("Value of shifted a : %d\n", b);
    
    return 0;
}

// Trick : a << n =  a*2^n