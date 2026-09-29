#include <stdio.h>

int main() {
    FILE* fm;

            // Attempt to open a file for reading
            
    fm = fopen("non_existent_file.txt", "r");

            // CRITICAL: Check for NULL pointer
            
    if (fm == NULL) {
        printf("Error: Could not open file for reading.\n");     			// This block runs because the file doesn't exist
        return 1;                                                               	// Exit the program with an error
    }

            // ... you can safely read from fptr here ...

    fclose(fm);                                                                   	// Close the file when done
    return 0;
}