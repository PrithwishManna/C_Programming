#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[50];

    fptr = fopen("example.txt1", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fputs("This is a test.", fptr);
    fclose(fptr);
    
    fptr = fopen("example.txt1", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    fscanf(fptr, "%s", buffer);				// We use fscanf to read just one word
    printf("First read: %s\n", buffer);

    // We are skipping: ' ' (pos 4), 'i' (5), 's' (6), ' ' (7), 'a' (8), ' ' (9)
    fseek(fptr, 6, SEEK_CUR);

    fscanf(fptr, "%s", buffer);
    printf("Read after skipping: %s\n", buffer); 	// Should be "test."

    fclose(fptr);
    return 0;
}