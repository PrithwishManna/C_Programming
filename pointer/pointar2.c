#include<stdio.h>

int main(){

int a=10,b=20, *p1, *p2, add, dif;

p1 = &a;
p2 = &b;

add = *p1 + *p2;
printf("Addition of p1 & p2 is : %d\n", add);

dif = *p1 - *p2;
printf("Difference of p1 & p2 is : %d\n", dif);

return 0;
}