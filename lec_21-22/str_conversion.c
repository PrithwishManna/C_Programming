#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *s = "3.14159";
    
    double dnumber = atof(s);               // Converts the string s to double 
    int inumber = atoi(s);                  // Converts the string s to int
    long lnumber = atol(s);                 // Converts the string s to long int
    
    printf("The changed double value is: %f\n", dnumber);
    printf("The changed int value is: %d\n", inumber);
    printf("The changed long value is: %ld\n", lnumber);
 
  return 0;
}