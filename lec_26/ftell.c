#include <stdio.h>

int main() {
    FILE *fptr;
    long fileSize;

    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fputs("This is a test.", fptr);
    fclose(fptr);
    
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    fseek(fptr, -5, SEEK_END);

    fileSize = ftell(fptr);

    printf("The total size of the file is: %ld bytes\n", fileSize);

    fclose(fptr);
    return 0;
}