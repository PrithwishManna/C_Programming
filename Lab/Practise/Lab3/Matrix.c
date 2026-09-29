#include<stdio.h>

void input(int n, int a[n][n]){
    printf("Enter the matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void trace(int n, int a[n][n]){
    int trace = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                printf("%d ",a[i][j]);
                trace += a[i][j];
            }
        }
    }
    printf("\n");
    printf("The trace is %d.\n",trace);
}

void antitrace(int n, int a[n][n]){
    int antitrace = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==(n-1)){
                printf("%d ",a[i][j]);
                antitrace += a[i][j];
            }
        }
    }
    printf("\n");
    printf("The antitrace is %d.\n",antitrace);
}

int isdiagonal(int n, int a[n][n]){
    int res = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(a[i][j] != 0){
                    res = 1;
                    break;
                }
            }
        }
    }
    return res;
}

int main(){
    int n;
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    int a[n][n];
    input(n,a);
    trace(n,a);
    antitrace(n,a);
    int r = isdiagonal(n,a);
    if(r == 0) printf("It is diagonal matrix.\n");
    else printf("It is not a diagonal matrix.\n");
    return 0;
}