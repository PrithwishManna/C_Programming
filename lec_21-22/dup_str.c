#include <stdio.h>
#include <string.h> // For strtok, strcmp, strcpy, strlen
#include <stdlib.h> // For malloc, free, exit
#include <ctype.h>  // For tolower

int main() {                // Step 1: Initialize
    char str[500];
    char *words[100]; // Store the words
    int wordCount[100] = {0}; // Store the count of each word
    int count = 0, found; // Total count of unique words
    
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }                                        // Step 2: Tokenize
    str[strcspn(str, "\n")] = '\0';
    const char *delimiters = " ,.!?;:-\t\n";
    char *token = strtok(str, delimiters);
    while (token != NULL) {
        for (int i = 0; token[i]; i++) {
            token[i] = tolower(token[i]);
        }
        found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                wordCount[i]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            words[count] = malloc(strlen(token) + 1);
            if (words[count] == NULL) {
                printf("Error: Memory allocation failed.\n");
                for(int i = 0; i < count; i++) {
                    free(words[i]);
                }
                return 1; 
            }
            strcpy(words[count], token);
            wordCount[count] = 1;
            count++;
            if (count >= 100) {
                printf("Warning: Maximum unique word limit (100) reached.\n");
                break;
            }
        }
        token = strtok(NULL, delimiters);
    }                           // Step 4: Print count of duplicate words
    printf("\nDuplicate words and their counts:\n");
    int duplicates_found = 0;
    for (int i = 0; i < count; i++) {
        if (wordCount[i] > 1) {
            printf("%s -> %d\n", words[i], wordCount[i]);
            duplicates_found = 1;
        }
    }
    if (!duplicates_found) {
        printf("No duplicate words found.\n");
    }
    for(int i = 0; i < count; i++) {
        free(words[i]);
    }
    return 0;
}
