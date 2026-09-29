#include <stdio.h>

int main() {
    FILE *fp;                                   // 1. Declare the file pointer
                                                
    fp = fopen("file1.txt", "w+");               // 2. Open the file

    if (fp == NULL) {
        printf("Error: Could not open file.txt\n");
        return 1;                               // Exit with an error
    }
    
    fputs("This is MA511.", fp);                // 4. Write to the file using fputs
                                                // 5. (CRITICAL) Close the file
                                                // This flushes the buffer and saves the changes!
    fclose(fp);

    printf("Successfully wrote to file1.txt using fputs\n");
    return 0;
}
