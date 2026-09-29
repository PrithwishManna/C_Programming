#include<stdio.h>

#define cel(x) (x-32)*5/9

int main(){
    float f;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&f);
    printf("The temperature in Celsius is : %.2f\n",cel(f));
    return 0;
}