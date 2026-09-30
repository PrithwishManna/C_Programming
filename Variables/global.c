//Global variables

#include<stdio.h>

 int m=48, n=20;
 int a=79, b=89;

void test(){
 printf("\n All variables are accessd from function");
 printf("\n values: m=%d; n=%d; a=%d; b=%d", m,n,a,b);
}

int main(){
printf("\n All variables are accessd from function");
 printf("\n values: m=%d; n=%d; a=%d; b=%d", m,n,a,b); 

test();     //calling of function

return 0;
}
