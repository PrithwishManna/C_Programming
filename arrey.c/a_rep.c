// In array replace an element
#include <stdio.h>

int main() {
    int arr[10]={1,4,5,2,8};
    int size = 5;
    int index = 2;
    int newElement = 6;
    
    for(int i = size;i > index;i--){
        arr[i] = arr[i-1];
        //arr[i+1]=arr[i]
    }
    arr[index] = newElement;
    size++;
    
    for(int i = 0;i < size;i++){
        printf("%d\t", arr[i]);
    }
    

    return 0;
}