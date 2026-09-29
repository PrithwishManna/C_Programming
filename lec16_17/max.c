// Write a function to compute the maximum of two numbers using pointers.

#include<stdio.h>

int *findMax(int *a_ptr,int *b_ptr){
    if(*a_ptr > *b_ptr){
        return a_ptr;
    }
    else{
        return b_ptr;
    }
}

int main(){
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);
    
    int *max_ptr = findMax(&x, &y);
      
    printf("The maximum value is : %d", *max_ptr);
    
    return 0;
}