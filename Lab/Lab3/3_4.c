#include<stdio.h>

int main(){
    float basic, gross;

    printf("Enter the basic salary : ");
    scanf("%f",&basic);

    if(basic >= 1 && basic <= 4000){
        gross = basic * 1.6;
    }
    else if(basic >= 4001 && basic <= 8000){
        gross = basic * 1.8;
    }
    else if(basic >= 8001 && basic <= 12000){
        gross = basic * 1.95;
    }
    else if(basic >= 12001){
        gross = basic * 2.1;
    }

    printf("Gross salary is %.2f.\n",gross);

    return 0;
}