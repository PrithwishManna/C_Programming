#include<stdio.h>
int main(){
	int x, y, z;
	x=8;
	y=x++;    // post increment  ( assign the value of x to y and then Increments)
	printf("x: %d  y: %d \n", x, y);
                                                                                                                                                                                                                                                                               
	z=++y;    //pre increment (increment the value of y and then assign it to z)
	printf("y: %d  z: %d \n", x, y);

	return 0;
}









