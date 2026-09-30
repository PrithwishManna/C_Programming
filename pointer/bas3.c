#include<stdio.h>

int main(){

int a, b;
int *ptr = &a;
a = 10;
b = 20;
printf("%d %d %d \n", a, b, *ptr);
*ptr = 30;
ptr = &b;				// ptr -- save only address of variables
*ptr = 40;				// *ptr -- save the value of variables
printf("%d %d %d", a, b, *ptr);

return 0;
}