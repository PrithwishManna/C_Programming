// Write a function to find the maximum in an array passed as argument.
// float *findMax(float A[], int size)

#include <stdio.h>

float *findMax(float A[], int size) {
    					
    if (size <= 0) {    			// Handle the edge case of an empty array
        return NULL; 
    }
    					
    float *max_ptr = &A[0];         		// Assume the first element is the maximum to start
    					
    for (int i = 1; i < size; i++) {        	// Loop through the rest of the array
        if (A[i] > *max_ptr) {              	// If we find a larger element...
            max_ptr = &A[i];                	// ...update our pointer to point to this new maximum	
        }
    }
    return max_ptr;                         	// Return the pointer holding the address of the largest element
}

int main() {
    float numbers[] = {1.5, 9.2, -3.0, 4.7, 8.1, 9.2};
    int size = 6;

    float *max_element_ptr = findMax(numbers, size);

    if (max_element_ptr != NULL) {
        printf("The array is: [");
        for (int i = 0; i < size; i++) {
            printf("%.1f ", numbers[i]);
            if(i < size-1){
                printf(", ");
            }
        }
        printf("]\n");

        printf("The maximum value is: %.1f\n", *max_element_ptr);
        printf("It is located at address: %p\n", max_element_ptr);
        									// You can also find its index by subtracting pointers
        printf("It is at index: %ld\n", max_element_ptr - numbers);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}