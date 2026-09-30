#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr = (int *)malloc(sizeof(int));  //memory allocation dynamically
    *ptr = 79;
    free(ptr);                              //memory deallocation
    
    printf("%d", *ptr);
    
    return 0;
}