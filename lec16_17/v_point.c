#include<stdio.h>

int main(){
    int a=1,b=2,c=3;
    void *ptr[3];
    
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    
    for(int i=0; i<3; i++)
        printf("%d\t", *(int *)ptr[i]);
    return 0;
}