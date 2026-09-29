#include<stdio.h>

int fact(int x){
    int fact = 1;

    if(x == 0){
        return 1;
    }
    else if(x > 0){
        for(int i = 1; i <= x;i++){
            fact *= i;
        }
    }
   return fact;
}

int main(){
    int n;
    
    do{
        char r;
        printf("Do you want to compute the factorial(y/n) : ");
        scanf(" %c",&r);
        if(r == 'y'){
            printf("Please enter the number : ");
            scanf("%d",&n);
            printf("The factorial of %d is %d.\n",n,fact(n));
        }
        else{
            break;
        }
    }while(1);

    return 0;

}

