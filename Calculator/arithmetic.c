#include<stdio.h>  //This is a preprocessor directive that includes the "Standard Input/Output" library.

// Global variables. It's better to pass them as arguments, but for this structure, they are global.

double a, b;    // Use double for better precision

// Function prototypes
double sum();
double difference();
double multiply();
double division();

int main(void){   //This is the main entry point of any C program. Execution always starts here.

	char c;   //Declares a variable c of type char to store a single character (the operator).

	printf("Enter your first number: ");
	scanf("%lf", &a);  
/*This is the input function."%lf" is the format specifier that tells scanf to expect a double. &a is the memory address of the variable a. scanf needs the address so it can place the value typed by the user directly into that memory location*/

	printf("Enter your second number: ");
	scanf("%lf", &b);
	printf("Please choose the operation (+,-,*,/) ");
	scanf(" %c", &c);  // Fixed: Added space and '%' Reads the single character for the operation. The leading space is crucial for skipping leftover newlines from previous inputs //

	if (c == '+' )
		printf("Sum of two numbers is as follows: %lf \n", sum());
	else if (c == '-' )
		printf("Difference of two numbers is as follows: %lf \n", difference());
	else if (c == '*' )
		printf("Multiplication of two numbers is as follows: %lf \n", multiply());
	else if (c == '/' )
		printf("Division of two numbers is as follows: %lf \n", division());
	else
		printf("Invalid Input ! \n");
	return 0;        // It's good practice for main to return 0 on success
}




/* if-else if-else Ladder: This is a control structure used for decision-making'.
   It checks the value of c.
   If c is +, it calls the sum() function and prints its result.
   If not, it checks if c is -, and so on.
   If c does not match any of the conditions, the final else block is executed, printing "Invalid Input!"*/



// For Compile: gcc main.c arithmetic.c -lm