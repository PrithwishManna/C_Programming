#include<stdio.h>

int fib_rec(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fib_rec(n-1) + fib_rec(n-2);
}

int fib_iter(int n){
    int zero = 0, first = 1;
    if(n==0) return zero;
    else if(n==1) return first;
    while(n>1){
        int temp;
        temp = zero;
        zero = first;
        first = temp + zero;
        n--;
    }
    return first;
}

int main(){
    int n;
    printf("Enter the number of terms of fibonacci sequence you want to print : ");
    scanf("%d",&n);
    printf("Fibonacci sequence by recursion : ");
    for(int i=0; i<=n; i++){
        printf("%d ",fib_rec(i));
    }
    printf("\n");
    printf("Fibonacci sequence by iteration : ");
    for(int i=0; i<=n; i++){
        printf("%d ",fib_iter(i));
    }
    return 0;
}