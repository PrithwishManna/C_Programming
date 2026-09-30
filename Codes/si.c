//Simple Interest//
#include<stdio.h>
int main(){
float P, R, T, SI, TA;    //TA = Total Amount,  SI = Simple Interest//
printf("Give your Principle: ");
scanf("%f",&P);
printf("Give your Rate of Interest: ");
scanf("%f",&R);
printf("Give your time: ");
scanf("%f",&T);
SI = (P * R * T)/100;
printf("Your Simple Interest is: %f", SI);
TA = P + SI;
printf("Your Total Amount is:%f",TA);
return 0;
}

