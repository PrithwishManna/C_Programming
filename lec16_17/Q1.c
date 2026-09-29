#include<stdio.h>

int main(){
    int a,b,*p = &a,*q = &b;
    printf("enter the value of a : ");
    scanf("%d",&a);

    printf("enter the value of b : ");
    scanf("%d",&b);

    int add,sub,mul,di;

    add = *p + *q;
    sub = *p - *q;
    mul = *p * *q;
    di = *p / *q;

    printf("Addition of two points is : %d\n", add);
    printf("Subtract of two points is : %d\n", sub);
    printf("Multiply of two points is : %d\n", mul);
    printf("Divide of two points is : %d", di);

    return 0;
}