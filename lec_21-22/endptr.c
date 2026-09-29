#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *s = "3.14xyz";
    char *endptr;
    
    double value = strtod(s, &endptr);          // strtod converts "3.14" and stops at the 'x'.
    
    if (endptr == s)                            // endptr is set to point to the 'x'. *endptr is 'x'.
        printf("No conversion performed.\n");
    else {
        printf("Converted value: %lf\n", value);
        printf("Characters after conversion: %s\n", endptr);        //Your code would print Characters after conversion: xyz. This tells you there was extra "garbage" text after the number.
    }
    
  return 0;
}