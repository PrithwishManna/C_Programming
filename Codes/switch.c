#include<stdio.h>
int main(){
int a;
printf("Enter your choice : ");
scanf("%d", &a);

switch(a)
    {
case 1 :
	printf("Choice is 1.");
	break;
case 2 :
	printf("Choice is 2.");
	break;
case 3 :
	printf("Choice is 3.");
	break;

default:
	printf("choice is other than 1 , 2 and 3.");
	break;
    }

}
