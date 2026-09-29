#include <stdio.h>

int main() {
    FILE *fptr;
    long pos;
    char ch;

    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not create data.txt!\n");
        return 1;
    }
    fputs("Hello, world!", fptr);
    fclose(fptr);
  
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open data.txt for reading!\n");
        return 1;
    }

    fseek(fptr, 0, SEEK_END);
    pos = ftell(fptr);

    
    while (pos > 0) {
        pos--; 
        fseek(fptr, pos, SEEK_SET); 
        
        ch = fgetc(fptr);
        printf("%c", ch);
    }

    printf("\n");

    fclose(fptr);
    return 0;
}