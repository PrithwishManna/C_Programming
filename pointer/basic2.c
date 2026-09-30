#include<stdio.h>

int main(){

int a;
int *ptr = &a;

a = 46;
printf("%p %p \n", &a, ptr);
printf("%d %d \n", a, *ptr);

*ptr = 58;

printf("%p %p \n", &a, ptr);
printf("%d %d \n", a, *ptr);

return 0;
}
