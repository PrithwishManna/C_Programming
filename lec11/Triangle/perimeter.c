#include "triangle.h"

				// This function calculates the perimeter of the triangle.
				// It can access the global variables a, b, and c because they are
				// declared as 'extern' in the included "triangle.h" file

double calculatePerimeter(void) {
    return (a + b + c);
}
