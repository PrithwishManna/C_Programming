#include<stdio.h>

void transpose(int n, int a[n][n], int transpose_a[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            transpose_a[i][j] = a[j][i];
        }
    }
}

int main(){
    int n;
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    int a[n][n], transpose_a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    transpose(n,a,transpose_a);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",transpose_a[i][j]);
        }
        printf("\n");
    }
    return 0;
}