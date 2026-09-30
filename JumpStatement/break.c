//Break Statement

#include<stdio.h>

int main(){
   
    int i;

	for(i = 100; i >= 1; i--){
		printf("i is : %d \n", i);
		
		if(i == 80){
		    break;
		}
	}
	printf("out of for loop");
	

return 0;
}

/*Uses of Break:
To get out of the loop.
Come out of the nested loops.
To get out of the switch case.*/