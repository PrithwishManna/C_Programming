#include<stdio.h>
int main(){
  int arr[5];
	for(int i=0; i<=4; i++){
	    printf("Enter element number %d : ", i+1);
	    scanf("\n %d", &arr[i]);
	}
	
	for(int i=0; i<5; i++)
	    printf("%d \t", arr[i]);
return 0;
}
