#include<stdio.h>

int isIdentityMatrix(int n, int a[n][n]){
    int c=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(a[i][j] != 1){
                    c--;
                    break;
                }
            }
            else{
                if(a[i][j] != 0){
                    c--;
                    break;
                }
            }
        }
    }
    return c;
}

void transpose(int n, int a[n][n], int transpose_a[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            transpose_a[i][j] = a[j][i];
        }
    }
}

int main(){
    int n;
    printf("Enter size of the matrix : ");
    scanf("%d",&n);

    int a[n][n], transpose_a[n][n], prod[n][n];

    printf("Enter the matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    transpose(n,a,transpose_a);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            prod[i][j] = 0;
            for(int k=0; k<n; k++){
                prod[i][j] += a[i][k] * transpose_a[k][j];
            }
        }
    }

    int r = isIdentityMatrix(n,prod);

    if(r == 1) printf("Orthogonal Matrix.\n");
    else printf("Not an orthogonal matrix.\n");
}