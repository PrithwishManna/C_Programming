#include<stdio.h>

int main(){
    int div, div1, div2;

    printf("Enter the dividend : ");
    scanf("%d",&div);
    
    printf("Enter the first divisor : ");
    scanf("%d",&div1);

    printf("Enter the second divisor : ");
    scanf("%d",&div2);

    if((div % div1 == 0) && (div % div2 == 0)){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }

    return 0;
}