#include<stdio.h>

int add(int a, int b){               //function definition and declaration
    int c;
    c = a + b;
    return c;
}

int main(){
    int x , y;
    printf("Enter two integers :  ");
    scanf("%d%d", &x, &y);
    int z = add(x,y);                 //Calling function
    printf("Sum of your two numbers : %d", z);
    return 0;
}