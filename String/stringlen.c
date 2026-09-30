#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    int count = 0;
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    count = strlen(str);
    /*for(int i = 0; str[i] != '\0'; ++i){
        ++count;
    }*/
    printf("Your string is : ");
    puts(str);
    printf("Length of the string : %d", count);
    return 0;
}