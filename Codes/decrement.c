#include<stdio.h>
int main(){
	int x, y, z;
	x = 6;
	y = x--;  //Post decrement ( assign the value of x to y and then decrement)
	printf("x: %d y: %d \n", x,y);

	z = --y;  //Pre decrement ( decrement the value of y and then assign it to z)
	printf("y: %d z: %d \n", x,y);

	return 0;
}
