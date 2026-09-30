#include<stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);            //&age gives memory address to store value//
printf("Your are %d years old\n", age);
return 0;
}
