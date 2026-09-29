#include <stdio.h>

int main() {
    int n,sum=0;
    printf("enter the number : ");
    scanf("%d", &n);
    for(int i = 1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
    printf("This is a perfect number");
    if(sum!=n)
    printf("This is not a perfect number");
    return 0;
}