#include<stdio.h>

int min(int x, int y){
    if(x<y)
        return x;
    else
        return y;
}
int hcf(int p, int q){					
    int gcd;
    for(int i = 1; i <= min(p,q); i++){
        if(p%i == 0 && q%i == 0)
            gcd = i;
    }
    return gcd;
}
int main(){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    
    int gcd = hcf(a,b);
    printf("GCD of your given two numbers %d & %d : %d\n",a,b,gcd);
    
    if(gcd == 1)
        printf("Your given two numbers %d & %d are co-prime",a,b);
    else
	printf("Your given two numbers %d & %d are not prime",a,b);
    return 0;
}

/* int hcf(int p, int q){
    int gcd;
    for(int i = min(p,q); i >= 1; i--){
        if(p%i == 0 && q%i == 0)
            gcd = i;
                break;
    }
    return gcd;
} */
