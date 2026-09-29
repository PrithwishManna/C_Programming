// Write a C program to print the elements of an array using pointers.

#include <stdio.h>

int main() {
    int A[3] = {4, 2, 5};
    int *p;
    p = A;                  // same as p = &A[0];
    
    for(int i = 0; i<3; i++){
        printf("%d ", *p);
        p++;
    }
    
    return 0;
}