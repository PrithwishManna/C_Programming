//passing array using function
#include<stdio.h>

void printArray(int arr[], int size){
    printf("Array elements are : ");
    for(int i = 0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
 
 int arr[5]={3,45,88,87,76};
 printArray(arr,5);
 
 return 0;
}