#include<stdio.h>
#include<string.h>

int main(){
    char str[40] = "I'm prithwish from West Bengal";
    char *first_appear;
    char *last_appear;
    
    first_appear = strchr(str, 'r');            // It scans the string from left to right (beginning to end).It stops and returns a pointer to the very first location where it finds the character.
    if(first_appear != NULL){
        printf("strchr() found: %s\n", first_appear);
    }
    last_appear = strrchr(str, 'r');            // It scans the string from right to left (end to beginning).t stops and returns a pointer to the last location where it finds the character.
    if(last_appear != NULL){
        printf("strrchr() found: %s\n", last_appear);
    }

return 0;
}