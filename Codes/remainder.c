#include<stdio.h>
int main(){
int a ,b ,q ,r;
printf("Enter the divident: ");
scanf("%d",&a);
printf("Enter the divisor: ");
scanf("%d",&b);
q = a/b;
printf("The Quotient is: %d\n",q);
r = a - (b * q);
printf("The remainder is: %d",r);
return 0;
}

