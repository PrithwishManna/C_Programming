/*Write a program that takes as input a day value from the user and prints Sunday if day=0,
Monday if day=1 and so on.*/


#include<stdio.h>
int main(void){
     int a;
     printf("Enter your choice : ");
     scanf("%d", &a);
     
switch(a){
    
    case 0 : 
            printf("Sunday");
            break;
    case 1 : 
            printf("Monday");
            break;
    case 2 : 
            printf("Tuesday");
            break;
    case 3 : 
            printf("Wednesday");
            break;
    case 4 : 
            printf("Thursday");
            break;
    case 5 : 
            printf("Friday");
            break;
    case 6 : 
            printf("Saturday");
            break;
    default :
            printf("invalid input");
            break;
    }
}