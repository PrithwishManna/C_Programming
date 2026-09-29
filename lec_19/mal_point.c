// Create an integer pointer and allocate 10 integer memory locations


#include <stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(10 * sizeof(int));
    
    if(ptr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter the array elements : \n");
    for(int i = 0;i < 10;i++){
        scanf("%d",ptr+i);				// scanf("%d",&ptr[i]);
    }
    printf("Your array elements : \n");
    
    for(int i = 0;i < 10;i++){
        printf("%d ",*(ptr + i));			// printf("%d",ptr[i]);
    }
    
    free(ptr);
    ptr = NULL;
    return 0;
}