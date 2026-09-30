#include<stdio.h>
int main(){
float b,e,h,g,m,p,z,P;

printf("Enter your marks in bengali:\n "); 
scanf("%f",&b);

printf("Enter your marks in english:\n ");
scanf("%f",&e);

printf("Enter your marks in history:\n ");
scanf("%f",&h);

printf("Enter your marks in mathematics:\n ");
scanf("%f",&m);

printf("Enter your marks in geography:\n ");
scanf("%f",&g);

printf("Enter your marks in physical science:\n ");
scanf("%f",&p);

printf("Enter your marks in biology:\n ");
scanf("%f",&z);

float T = (b+e+h+g+m+p+z);
printf("Your total marks in exam: %f\n", T);

P = T*100./700;
printf("Your total percentage in exam: %f", P); 

return 0;
}
