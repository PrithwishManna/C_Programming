#include<stdio.h>

int main(){
	int a = 10;
	a++;
	printf("Value of a : %d", a);
	printf("\nEnter a value ");
	scanf("%d",&a);
	a--;
	printf("Value of a : %d", a);
return 0;
}


//The register storage class is a hint to the compiler to store the variable in a CPU register instead of in memory (RAM) for faster access. A fundamental property of CPU registers is that they do not have a memory address.