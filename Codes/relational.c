#include<stdio.h>
int main(){
 	int x=12, y=15;
	printf("x =%d \n", x);
	printf("y =%d \n", y);
	
	printf("x>y : %d \n", x>y);     //0
	printf("x<=y : %d \n", x<=y);   //1
	printf("x>=y : %d \n", x>=y);   //0
	printf("x<y : %d \n", x<y);     //1
        printf("x==y : %d \n", x==y);   //0  // '=' stands for assign. '==' stands for equals
	printf("x!=y : %d \n", x!=y);   //1
	return 0;
}

