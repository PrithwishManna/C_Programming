#include<stdio.h>
int main(){
int I, n, sum=0;
 	printf("Enter the natural number : ");
 	scanf("%d", &n);

	for(I=1; I<=n; I++){
	   sum += I;
	}
	printf("Your first natural number sums = %d",sum);

return 0;
}
