#include<stdio.h>
#include<math.h>
#define POWER(x,y) pow(x,y)
double power(int x, int y){
    double result=1;
    for(int i=1;i<=y;i++){
        result=result*x;
    }
    return result;
}

int main(){
    int x,y;
    printf("Enter the value of x & y : ");
    scanf("%d%d",&x,&y);
    printf("%d to the power %d is : %.2f\n",x,y,POWER(x,y));
    printf("%d to the power %d is : %.2f\n",x,y,power(x,y));
    return 0;
}