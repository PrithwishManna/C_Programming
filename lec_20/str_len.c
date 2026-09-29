#include<stdio.h>
#include<string.h>

int main(){
	char str[20] = "Programming";
	printf("Length of string str : %lu\n", strnlen(str, 30));
	printf("Length of string str : %lu", strnlen(str, 7));

   return 0;
}

/* If a null terminator (\0) is found within the first maxlen bytes, strnlen() returns the actual length of the string (just like strlen).

If no null terminator is found after checking maxlen bytes, the function stops and returns maxlen */