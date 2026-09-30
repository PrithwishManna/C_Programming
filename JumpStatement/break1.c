#include<stdio.h>

int main(){

   int i = 1;

	while(i<=10){
	     printf("%d \t", i);
		i++;				// ekhane i = 5 hoa gelei loop break hobe
		if(i > 5){
		   break;
		}
	   	// i++;				// ekhane i = 6 obdhi print hobe
 
	}

return 0;
}
