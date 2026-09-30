#include<stdio.h>

int main(){

int a = 100;
int *ptr1, *ptr2;
ptr1 = &a;
ptr2 = &a;

printf("Pointer ptr1 before addition : %p\n", ptr1);

ptr1+=2;

printf("Pointer ptr1 after addition : %p\n", ptr1);

printf("Pointer ptr2 before substraction : %p\n", ptr2);

ptr2-=2;

printf("Pointer ptr2 after substraction : %p\n", ptr2);

return 0;
}