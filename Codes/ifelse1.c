#include<stdio.h>

int main(){

 int a;
 printf("Enter your number : ");
 scanf("%d", &a);


	if(a>0){
		if(a<100)
		   printf("%d is a two digit number. \n", a);
		else
		   printf("%d isn't a two digit number. \n", a);
	}
	printf("%d is a negative number.", a);	

return 0;
}
