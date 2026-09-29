#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[20];

    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fputs("Hello, world!", fptr);
    fclose(fptr);
    
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    // We are skipping: H(0) e(1) l(2) l(3) o(4) ,(5) (6)
    fseek(fptr, 7, SEEK_SET);

    fgets(buffer, 20, fptr);

    printf("After seeking 7 bytes, we read: %s\n", buffer);

    fclose(fptr);
    return 0;
}


// Output : world!