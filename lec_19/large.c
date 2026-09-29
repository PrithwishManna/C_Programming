// Write a program that accepts n floating point numbers from the user and prints the largest element. [Use calloc() for dynamic memory allocation]

#include<stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    ptr = (float *)calloc(n,sizeof(float));
    if(ptr == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        printf("Number %d is :",i+1);
        scanf("%f",&ptr[i]);
    }
    float large_element = ptr[0];
    for(i=0;i<n;i++){
        if(ptr[i] > large_element){
            large_element = ptr[i];
        }
    }
    printf("Largest number is : %.2f",large_element);
    
    free(ptr);
    ptr = NULL;

    return 0;
}