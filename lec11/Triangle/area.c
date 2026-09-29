#include "triangle.h"

		// This function calculates the area of the triangle using Heron's formula.
		// It can access the global variables a, b, and c because they are
		// declared as 'extern' in the included "triangle.h" file

double calculateArea(void) {
   		// Calculate the semi-perimeter (s)

    double s = (a + b + c) / 2.0;

    		// Calculate the area using Heron's formula

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    return area;
}
