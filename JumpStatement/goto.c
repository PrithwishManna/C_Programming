#include<stdio.h>
int main(){
int a = 10;

	loop:do{
	if(a == 20){
		a = a + 1;
		goto loop;
	        }
	   a++;
	   printf("Value of a : %d\n",a);
	}
	while(a<30);

return 0;
}


/*#include<stdio.h>
int main(){
int a = 10;
	while(a<30){
	a++;
		if(a == 20){
		   continue;
		}
	printf(" Value of a is : %d\n", a);
	}
return 0;
}*/