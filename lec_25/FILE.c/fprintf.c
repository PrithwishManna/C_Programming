#include <stdio.h>

int main() {
    FILE *fm; // 1. Declare the file pointer

    // 2. Open the file
    fm = fopen("file.txt", "w+");

    // 3. (MISSING PART) Check for errors
    if (fm == NULL) {
        printf("Error: Could not open file.txt\n");
        return 1; // Exit with an error
    }

    // 4. Write to the file
    fprintf(fm, "%s", "This is Macbook m4.");

    // 5. (MISSING PART) Close the file
    fclose(fm);

    printf("Successfully wrote to file.txt\n");
    return 0;
}