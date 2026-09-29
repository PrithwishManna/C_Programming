#include <stdio.h>

int main() {
    float gravity = 9.8;
    float speed_of_light = 299792458.0;

    					// A constant pointer to a constant value
    const float * const ptr = &gravity;	// Read it: "ptr is a constant (const) pointer (*) to a float that is also constant (const float)."

    printf("Value: %.1f\n", *ptr);

    					// *ptr = 10.0; 
                			// ERROR! Cannot change the value.
    					// ptr = &speed_of_light;     
					// ERROR! Cannot change the pointer.

    return 0;
}

// The pointer ptr cannot be changed.The value it points to cannot be changed.