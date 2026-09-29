#include <stdio.h>

int main() {
    float pi = 3.14;
    float e = 2.71;

    				// Pointer to a constant float

    const float *ptr = &pi;	// Read it: "ptr is a pointer (*) to a float that is constant (const float)."

    printf("Value pointed to by ptr: %.2f\n", *ptr);

    				// *ptr = 4.0;       
				// ERROR! You cannot change the value through the pointer.

    ptr = &e;           	// VALID. You can change where the pointer points.

    printf("Pointer now points to the value: %.2f\n", *ptr);

    return 0;
}

				// The value being pointed to cannot be changed using ptr.
				// The pointer ptr itself can be changed to point to something else.