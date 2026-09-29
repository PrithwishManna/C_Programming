#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int n = rand()%6 +1;
    printf("%d\n",n);
    return 0;
}