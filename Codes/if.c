#include<stdio.h>
int main(){
   int a;

   printf("Enter the number: ");
   scanf("%d", &a);

	if(a>99){
	  printf("%d isn't a two digit number \n", a);
	  printf("End of the if statement\n");
	}

	printf("End of main method");

return 0;
}



//IF 'if' has one statement then there isn't to use the curly brasses//
