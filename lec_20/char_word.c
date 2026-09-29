// Write a function to count the numbers of characters and words in a string?


#include <stdio.h>
#include <ctype.h> 

void WordsnChars(const char *str, int *words, int *chars) {

    *words = 0;
    *chars = 0;

    int state = 0; 
    int i = 0;  
    while (str[i] != '\0') {
        if (isspace(str[i])) {
            state = 0; 
        } 
        else {
            (*chars)++;
            if (state == 0) {
                state = 1; 
                (*words)++; 
            }
        }
        i++; 
    }
}

int main() {
    const char *testString = "Hello World";
    int wordCount;
    int charCount;
    WordsnChars(testString, &wordCount, &charCount);
    printf("Input: %s\n", testString);
    printf("Output: Words: %d, Characters: %d\n", wordCount, charCount);

    const char *testString2 = "  This has   multiple spaces. ";
    WordsnChars(testString2, &wordCount, &charCount);
    printf("\nInput: %s\n", testString2);
    printf("Output: Words: %d, Characters: %d\n", wordCount, charCount);

    return 0;
}