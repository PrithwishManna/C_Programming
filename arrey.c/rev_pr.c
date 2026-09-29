#include<stdio.h>
int main(){

int i, arr[5];

	for(i=0; i<=4; i++){
	    printf("Enter element number %d : ", i+1);
	    scanf("\n %d", &arr[i]);
	}

	for(i=4; i>=0; i--)
	    printf("%d \t", arr[i]);

return 0;
}
