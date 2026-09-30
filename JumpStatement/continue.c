#include<stdio.h>

int main(){
 
   int num = 10;
	while(num > 0){
		if(num == 6){
		    num--;
		    continue;
		}
	     printf("%d ", num);
	     num--;
	}
return 0;
}


/* The loop's execution begins once the loop condition is determined to be true.

   The status of the continue statement will be evaluated.

   If the condition is false, normal execution will continue.

   If the condition is met, the program control will return to the beginning of the loop and all statements following the continue will be skipped.
   The steps will be repeated till the loop ends.*/