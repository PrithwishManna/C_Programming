#include<stdio.h>
int main(){
int i=0 , marks[10];

	for(; i<=9; i++){
	   printf("Enter your marks : ");
	   scanf("\n %d", &marks[i]);
	}
	for(int j = 0;j<=9; j++){
		if(marks[j] < 35)
		   printf("%d \t", j);
	}

return 0;
} 
