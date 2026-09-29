#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
char str[500];
printf("Enter your string :");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
char *token = strtok(str, " ");
while (token != NULL) {
for (int i = 0; token[i]; i++)
token[i] = tolower(token[i]); //convert to lowercase
printf("%s\n", token);
token = strtok(NULL, " ");
} return 0;
}