#include<stdio.h>

void swap(int *p, int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main(){

int a = 2, b = 7;
printf("Before swaping value of a & b : %d %d\n",a,b);
swap(&a,&b);
printf("After swaping value of a & b : %d %d",a,b);
return 0;
}

