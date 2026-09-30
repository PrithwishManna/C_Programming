#include<stdio.h>
#include<math.h>

int main(){
    float num, root;
    
    printf("Enter the number : ");
    scanf("%f", &num);
    
    root = sqrt(num);
    printf("Your square root of %.2f is : %.2f", num, root);
    return 0;
}