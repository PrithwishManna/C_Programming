#include<stdio.h>
#include<string.h>

int main(){
    char mystr[50] = "I'm an Iitian from IIT Guwahati";
    printf("%s",strstr(mystr, "IIT"));
    return 0;
}