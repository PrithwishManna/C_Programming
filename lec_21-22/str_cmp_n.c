#include <stdio.h>
#include<string.h>

int main(){
    char s1[30] = "Hello";
    char s2[30] = "Hello World";
    
    if(strncmp(s1,s2,5) == 0)
        printf("s1 and s2 are equal");
    else
        printf("s1 follows s2");
    
    return 0;
}