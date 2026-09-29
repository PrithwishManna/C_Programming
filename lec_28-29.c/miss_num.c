#include<stdio.h>

int findMissingNumber(int arr[], int n){
    int xor_all = 0;
    for(int i = 0; i <= n; i++){
        xor_all = xor_all ^ i;
    }
    
    int xor_arr = 0;
    for(int i = 0; i < n; i++){
        xor_arr = xor_arr ^ arr[i];
    }
    
    return xor_all ^ xor_arr;
}


int main(){
    int arr[] = {0,1,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array [");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
    
    printf("Expected range of numbers : [0, %d]\n", n);
    int missing = findMissingNumber(arr, n);
    
    printf("The missing number is : %d", missing);
    
    return 0;
}
    
