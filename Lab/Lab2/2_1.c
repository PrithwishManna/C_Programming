#include<stdio.h>
int main(void) {
	char c,new_c;
	printf("Enter a lowercase character : ");
	scanf("%c",&c);
	new_c = c - 32;
	printf("The uppercase character : %c",new_c);
	return 0;
}
