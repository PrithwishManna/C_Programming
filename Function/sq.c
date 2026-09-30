#include<stdio.h>

void sined(){
	printf("Now i'm perusing my msc degree at IITG\n");
}

int square(int x){
	return x * x;
}

int cube(int y){
	return y * y * y;
}

int main(){
	sined();
	int sq = square(5);
	int pa = cube(7);
	printf("Area of square of length 5 : %d\n", sq);
	printf("Volume of cube of length 7 : %d\n", pa);

	return 0;
	}



/*  return_type function_name(parameter_list) {
    // body of the function
}*/

/* Return type: Specifies the type of value the function will return. Use void if the function does not return anything. */