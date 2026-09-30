#include<stdio.h>
#include<string.h>

int main(){
char str[40];

puts("Enter a string");    // puts automatically add new line(\n) in the end
scanf("%[^\n]s",str);

//puts("The size is : ");

int size = 0;
int i = 0;

while(str[i] !='\0'){
	size++;
	i++;
}

printf("The size is : %d",size);

return 0;
}
