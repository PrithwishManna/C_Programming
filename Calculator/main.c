#include<stdio.h>

extern double a, b;

double sum(){
	return a + b;
}

double difference(){
	return a - b;
}

double multiply(){
	return a * b;
}

double division(){
	// It's good practice to check for division by zero
	
	if (b == 0){
	    printf("Error: Cannot divide by zero.\n");
	    return 0;   // Return 0 or handle the error appropriately
	}
	return a / b;
}

// For Compile: gcc main.c arithmetic.c -lm