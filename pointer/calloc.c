#include<stdio.h>
#include<stdlib.h>

int main(){

int *ptr;
int n=5;
printf("Enter the number of elements : %d\n", n);
ptr = (int *)calloc(n,sizeof(int));


if(ptr == NULL){
	printf("Memory is not allocated \n");
	exit(0);
}
else{
	printf("Memory successfully allocated using calloc \n");
        for(int i=0; i<n; i++){
            ptr[i] = i+1;
        }
        printf("The elements of the array are \n");
        for(int i=0; i<n; i++){
            printf("%d ", ptr[i]);
        }
    }
 free(ptr);                              //memory deallocation
 ptr = NULL;


return 0;
}