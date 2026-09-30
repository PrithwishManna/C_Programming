#include<stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	int *ptr = arr;				//this line is equivalent to int *ptr = &arr[0];

	printf("Enter %d array elements : ",SIZE);
		while(ptr < &arr[SIZE]){
		    scanf("%d", ptr);
		    ptr++;
		}

	ptr = arr;
	printf("Elements in an array are : ");
	for(int i = 0; i < SIZE; i++){
		printf("%d ", *(ptr + i));
	}

return 0;
}
