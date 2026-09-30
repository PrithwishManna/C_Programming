#include<stdio.h>

int main(){
int a=10;
int *p, **p1;

p = &a;
p1 = &p;

printf("Address of a : %p\n", p);
printf("Address of p : %p\n", p1);

printf("Value stored at p : %d\n", *p);
printf("Value stored at p1 : %d\n", **p1);

return 0;
}