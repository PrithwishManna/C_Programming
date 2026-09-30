// Print the factorial of first 'n' numbers


#include<stdio.h>
long long factorial(int x){
    if(x == 0)
        return 1;
    else
        return x * factorial(x-1);
}
int main(){
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } 
    else{
        printf("\n--- Factorials from 0 to %d ---\n", n);

        for(int i = 0; i <= n; i++)
            printf("Factorial of %d = %lld\n",i,factorial(i));
    }
    
    return 0;
}
