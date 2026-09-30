#include<stdio.h>

int main(){

int a = 10, b = 56;

int *ptr1 = &a;
int *ptr2 = &b;

printf("Pointer ptr1 before increment : %p\n", ptr1);

ptr1++;		// Increment pointer(increment the address value 4 bytes)

printf("Pointer ptr1 after increment : %p\n", ptr1);

printf("Pointer ptr2 before decrement : %p\n", ptr2);

ptr2--;		// Decrement pointer(decrement the address value 4 bytes)

printf("Pointer ptr2 after decrement : %p\n", ptr2);

return 0;
}