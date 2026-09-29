//Write a program that takes as user input lowercase character and prints the corresponding uppercase.


#include<stdio.h>

int main(){
    char low, up;
    printf("Enter a lowercase character : ");
    scanf("%c", &low);
    up = low - 32;
    printf("Your converted uppercase character is : %c", up);
    return 0;
}