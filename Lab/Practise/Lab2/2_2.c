#include<stdio.h>
static float total = 0;
int sum(float a){
    total += a;
    return total;
}
int main(){
    int a;
    printf("Enter 5 numbers : ");
    for(int i = 1; i <= 5; i++){
        scanf("%d", &a);
        printf("Num : %d\tTotal: %d\n",a,sum(a));
    }
    return 0;
}