#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdio.h>
#include <math.h> 			// Needed for sqrt() in area calculation

					// Declare global variables that will be defined in main.c
					// The 'extern' keyword tells the compiler that these variables exist,
					// but are defined in a different file.

extern double a, b, c;

					// Function prototypes

double calculateArea(void);
double calculatePerimeter(void);

#endif 					// TRIANGLE_H
