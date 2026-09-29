#include<stdio.h>

int main(){
    int d, i = 1, org;
    long int b = 0;

    printf("Enter the decimal number : ");
    scanf("%d",&d);
    org = d;

    while(d > 0){
        b = b + (d%2)*i;
        i *= 10;
        d /= 2; 
    }

    printf("The binary equivalent of %d is %ld.\n",org,b);

    return 0;
}