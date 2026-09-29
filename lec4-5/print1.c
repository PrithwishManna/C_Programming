#include <stdio.h>

int main(){
    int a=1,b=2,c=3;
    a +=b +=c +=7;
    printf("a=%d,\t b=%d,\t c=%d\n", a, b, c);
   
    return 0;
}