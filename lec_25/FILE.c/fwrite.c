#include <stdio.h>

typedef struct {                        // A simple struct to represent our data
    int id;
    char name[50];
} User;

int main() {
    FILE *fp;
    
    User users_to_write[3] = {          // 1. Create an array of data
        {101, "Alice"},
        {102, "Bob"},
        {103, "Charlie"}
    };

    fp = fopen("users.dat", "wb");      // 2. Open the file in binary write mode ("wb")

    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    
    fwrite(                             // 3. Write the entire array in one operation
        users_to_write,  // ptr:   The start of our array
        sizeof(User),    // size:  The size of ONE User struct
        3,               // count: The number of items in our array
        fp               // fp:    The file to write to
    );

                    
    fclose(fp);                         // 4. Close the file

    printf("Successfully wrote 3 user records to users.dat\n");
    return 0;
}


/* You will have a file named users.dat. If you try to open this file in a simple text editor (like Notepad), it will look like garbage (e.g., Alice Bob Charlie).

This is because it is not a text file. It's a binary file containing the raw memory representation of your structs. The only way to read this file correctly is to use its sister function, fread(), in another C program that also knows the definition of the User struct. */