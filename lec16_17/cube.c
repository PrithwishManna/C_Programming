// Write a function to compute the cube of a number using pointers

#include<stdio.h>

float *computeCube(float *num_ptr){
    float a = *num_ptr;
    *num_ptr = a*a*a;       // Store the new value back at the original address
					
    return num_ptr;         // Return the pointer to the modified variable
}


int main(){
    float num;
    printf("Enter the value of num : ");
    scanf("%f",&num);
    
    printf("Address of num : %p\n", &num);
    						// Call the function, passing the address
    float *cube_ptr = computeCube(&num);
    
    printf("Cube of number : %lf\n", *cube_ptr);
    printf("Address of Function : %p\n", cube_ptr);
    printf("Value of num : %f", num);			// The original is changed
    
    return 0;
}


