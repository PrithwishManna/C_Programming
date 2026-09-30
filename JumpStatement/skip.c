// print the numbers from 1 to 100 but in middle skip from 30 to 45.

#include<stdio.h>
int main(){

   int pihu = 1;
	while(pihu <= 98){
	      pihu += 2;
		if(pihu > 30 && pihu < 45)
		    continue;
	      printf("%d \t", pihu);
	}
return 0;
}
