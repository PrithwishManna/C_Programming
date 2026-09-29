#include<stdio.h>

int main(){
    int a = 7;              // 0000 0111
    int b = a >> 2;         // 0000 0001 -> 1
    
    printf("Value of original a : %d\n", a);
    printf("Value of shifted a : %d\n", b);
    
    return 0;
}

/* Trick : This is the same as integer division 7/2^2 =7/4.
           7 divided by 4 is 1.75. Discarding the .75 remainder gives us 1.
           (Integer division is division that discards any remainder.) */