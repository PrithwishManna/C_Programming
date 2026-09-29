#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[50];

    fptr = fopen("example.txt3", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fputs("This is the first line.\n", fptr);
    fputs("This is the second line.\n", fptr);
    fclose(fptr);
   
    fptr = fopen("example.txt3", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    fgets(buffer, 50, fptr);
    printf("First read: %s", buffer);
    
    rewind(fptr);					// 2. Go back to the beginning

    fgets(buffer, 50, fptr);
    printf("After rewind: %s", buffer);

    fclose(fptr);
    return 0;
}