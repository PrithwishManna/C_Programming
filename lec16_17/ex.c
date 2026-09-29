#include<stdio.h>

int main(){
    int i=3,j=5,*p=&i,*q=&j,*r;
    double x;
    int a=7 **p / *q + 7;
    int b = (* (r=&j) *=* p);
    printf("%d\n",b);
    printf("%d",a);
    return 0;
}


// 7 **p / *q + 7  =  ((7 * (*p) / (*q)) + 7  =  (7*3/5)+7  =  (21/5)+7  =  4+7 =  11.
// b = (* (r=&j) *=* p);
// b = (*(r=(&j))) *= (*p);
// b = (5 *= 3);
// b = (5 * 3);
// b = 15;