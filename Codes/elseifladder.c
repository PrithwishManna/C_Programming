#include<stdio.h>

int main(){

 int a;
 printf("Enter your number : ");
 scanf("%d", &a);

  // Case 1: The number is positive
  if(a>0){
	if(a<10)
	  printf("%d is a single digit number. \n", a);
 	else if(a<100)
	  printf("%d is a two digit number. \n", a);
	else if(a<1000)
	  printf("%d is a three digit number. \n", a);
	else
	  printf("%d is a positive number with four or more digits. \n", a); 
	}

  // Case 2: The number is negative (using else if)
  else if(a<0)
	printf("%d is a negative number. \n", a);

  // Case 3: The only remaining possibility is that the number is zero  
  else
     printf("Your number is zero. \n");
return 0;
}




//The else keyword cannot take a condition in parentheses like else(a<0). If you need to check another condition, you must use else if (a<0).
