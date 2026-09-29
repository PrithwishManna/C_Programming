#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[50];
    long position;

    fptr = fopen("example.txt2", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fputs("Hello, world!", fptr);			// current position : ' '
    fclose(fptr);
   
    fptr = fopen("example.txt2", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    fseek(fptr, -6, SEEK_END);

    fgets(buffer, 50, fptr);
    printf("Read from this position: %s\n", buffer);

    fclose(fptr);
    return 0;
}