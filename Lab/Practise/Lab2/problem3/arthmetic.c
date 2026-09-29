#include<stdio.h>
float a,b;

void addition(){
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    printf("Sum: %.2f\n",a+b);
}

void subtraction(){
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    printf("Difference: %.2f\n",a-b);
}

void multiplication(){
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    printf("Product: %.2f\n",a*b);
}

void division(){
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    if(b!=0)
        printf("Quotient: %.2f\n",a/b);
    else
        printf("Error: Division by zero\n");
}