//Write a C program to create and print a 2D floating point array of size (row * col), where row and col are user input.


#include <stdio.h>
#include<stdlib.h>

int main() {
    float **arr;
    int i,j;
    int rows, cols;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of cols : ");
    scanf("%d",&cols);
    
    arr = (float **) malloc(rows * sizeof(float *));
    if(arr == NULL){
        printf("Memory allocation failed for rows!\n");
        return 1;
    }
    for(i=0;i<rows;i++){
        arr[i] = (float *) malloc(cols * sizeof(float));
        if(arr[i] == NULL){
            printf("Memory allocation failed for row %d!\n",i);
            for(j=0;j<i;j++){
               free(arr[j]); 
            }
         free(arr);
         return 1;
        }
    }
    printf("\n----Enter %d elements (%d x %d)----\n", rows*cols, rows, cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter element arr[%d][%d] : ",i,j);
            scanf("%f",&arr[i][j]);
        }
    }
    printf("---2-D array you entered is : ---\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%.2f\t", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++){
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
    
    return 0;
}