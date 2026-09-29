#include "triangle.h"

			// Define the global variables that were declared in triangle.h
double a, b, c;

int main() {
    printf("Enter the three sides of the triangle (a, b, c): ");
    
    			// Read user input and store it in the global 

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    			// Basic check for a valid triangle

    if ((a + b <= c) || (a + c <= b) || (b + c <= a) || a<=0 || b<=0 || c<=0) {
        printf("Error: The given sides do not form a valid triangle.\n");
        return 1;
    }

    			// Call the functions from the other files

    double perimeter = calculatePerimeter();
    double area = calculateArea();

    			// Print the results

    printf("----------------------------------------\n");
    printf("The Perimeter of the triangle is: %.2f\n", perimeter);
    printf("The Area of the triangle is: %.2f\n", area);
    printf("----------------------------------------\n");

    return 0;
}
