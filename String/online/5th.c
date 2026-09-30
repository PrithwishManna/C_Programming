#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    //scanf("%s",str);   // for only one letter we should use &str[i]
    gets(str);
    printf("Your input was : %s",str);  // only the first word will be considered
    return 0;
}