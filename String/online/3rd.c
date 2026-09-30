#include<stdio.h>
int main(){
    char str[] = "IIT GUWAHATI";
    str[1]= 'T';
    str[2]= 'I';
    str[2]= 73;
    int i = 0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}