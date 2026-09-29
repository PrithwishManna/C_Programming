#include <stdio.h>

int main() {
    float radius = 5.0;
    float height = 10.0;

    							// A constant pointer MUST be initialized at declaration.
    float * const ptr = &radius;			// Read it: "ptr is a constant (const) pointer (*) to a float (float)."

    printf("Initial value: %.2f\n", *ptr);

    *ptr = 7.5;         				// VALID. You can change the value it points to.

    							// ptr = &height;      
							// ERROR! You cannot change the pointer itself.

    printf("Modified value: %.2f\n", *ptr); 		// Will print 7.5

    return 0;
}

// The pointer ptr itself is constant and cannot be changed to point somewhere else. It must be initialized when declared.The value it points to can be changed.