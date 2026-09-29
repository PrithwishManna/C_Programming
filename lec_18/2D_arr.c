//Write a program to print the elements of the 2-D array

#include <stdio.h>

int main() {
    int arr[3][2] = {{2,3},{10,4},{1,5}};
    
    printf("Printing the elements of 2-D array : \n");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/* #include <stdio.h>

int main() {
    int arr[3][2] = {{2,3},{10,4},{1,5}};
    
    printf("Printing the elements of 2-D array : \n");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", *(*(arr + i) + j));
        }
        printf("\n");
    }
    
    return 0;
} */