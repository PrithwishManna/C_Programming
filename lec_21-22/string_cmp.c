#include <stdio.h>
#include<string.h>

int main(){
    char s1[30] = "Hello";
    char s2[30] = "Hello World";
    if(strcmp(s1,s2) < 0)
        printf("s1 and s2 are different");
    else if(strcmp(s1,s2) == 0)
        printf("s1 and s2 are equal");
    else
        printf("s1 follows s2");
    
    return 0;
}

// The strings are different. "Hello" is a prefix of "Hello World", so s1 is "less than" s2. strcmp returns a negative, non-zero number
/* Returns 0 (zero):
This means the strings are exactly equal.
Example: strcmp("Hello", "Hello") returns 0.

Returns a negative value (less than zero):
This means s1 comes before s2 in the dictionary.
Example: strcmp("Apple", "Banana") returns a negative number.

Returns a positive value (greater than zero):
This means s1 comes after s2 in the dictionary.
Example: strcmp("Zebra", "Cat") returns a positive number. */