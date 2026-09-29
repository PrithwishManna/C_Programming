#include <stdio.h>

void arr(int x[][4]){
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d\t", x[i][j]);
            //end of the inner loop
        }
        //end of the outer loop
        printf("\n");
    }    
}


int main() {
    int a[2][4]={{1,2,3},{9,0,4}};
    int b[2][4]={6,7,30,12,0,4};
    printf("Values in array a by row :\n");
    arr(a);
    printf("Values in array b by row :\n");
    arr(b);
    return 0;
}