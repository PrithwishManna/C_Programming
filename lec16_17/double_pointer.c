#include<stdio.h>

int main(){
    int a = 10;
    int *x = &a;
    int **y = &x;
    
    printf("Value of a : %d\n",a);
    printf("Address of a : %p\n",&a);
    printf("Value of *x : %d\n",*x);
    printf("Address of a which is point in x : %p\n",x);
    printf("Address of x : %p\n",&x);
    printf("Value of **y: %d\n",**y);
    printf("Address of y : %p\n",&y);
    printf("Address of x which is point in y : %p\n",y);
    
    return 0;
}
