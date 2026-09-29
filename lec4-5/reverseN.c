//Write a program that takes as user input a 3-digit number and reverses the number.

/*#include<stdio.h>

int main(){
   int a,b,c,d,e,f;
   printf("Enter any 3-digit number : ");
   scanf("%d", &a);
   b = a%10;
   a-=b;
   c = a/10;
   d = c%10;
   c-=2;
   e = c/10;
   f = (b*100)+(d*10)+e;
   printf("Your reverse 3-digit number : %d", f);
   return 0;
}*/



#include<stdio.h>

int main(){
    int num,remainder,revnum=0;
    printf("Enter any 3-digit number : ");
    scanf("%d", &num);
    
    while(num>0){
        remainder=num%10;
        revnum=revnum*10+remainder;
        num/=10;
    }
    printf("Your reverse 3-digit number : %d", revnum);
    
    return 0;
}
