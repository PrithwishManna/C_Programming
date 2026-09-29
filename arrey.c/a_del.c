//Delete an element from array
 
#include<stdio.h>
int main(){
    int arr[10]={1,3,5,7,9};
    int size = 5;
    int index = 2;
    
    for(int i = index;i<size-1;i++){
        
        arr[i] = arr[i+1];
    }
    size--;
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    
    return 0;
}