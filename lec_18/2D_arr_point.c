#include <stdio.h>

int main() {
    int arr[3][2] = {{2,3},{10,4},{1,5}};
    int *p = *arr;              // *arr = *arr[0][0]
    int *r = *arr + 1;          // *arr + 1 => *arr[o][1]. *arr + 1 (which is arr[0] + 1) moves by the size of one integer (sizeof(int)) to the address of arr[0][1]. *arr => row 0 & col 0 and *arr + 1 => row 0 & col 1
    int *s = *(arr + 1);        // *(arr + 1) => *arr[1][0] 
    int *t = (*arr) + 1;        // (*arr) + 1 => *arr[0][1]
    int *q = *(arr + 2);        // *(arr + 2) => *arr[2][0]
    int *u = *(arr + 1) + 1;    // *(arr + 1) + 1 => *arr[1][1]. *(arr + 1) => row 1 & col 0 and *(arr + 1) + 1 => row 1 & col 1
    
    printf("%d\t", *p);
    printf("%d\t", *r);
    printf("%d\t", *s);
    printf("%d\t", *t);
    printf("%d\t", *q);
    printf("%d\t", *u);
    return 0;
}