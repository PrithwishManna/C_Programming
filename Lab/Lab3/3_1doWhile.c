#include<stdio.h>

void prime();
void armstrong();

int main(){
	int c;

	do{
		printf("1.Check if the input number is prime.\n2.Check if the input number is Armstrong number.\n3.Exit.\n");	
		scanf("%d",&c);
	
		switch (c){
		
		case 1:{
			prime();
			break;
		}

		case 2:{
			armstrong();
			break;
		}

		case 3:{
			 return 0;
		}

		default:{
			 printf("Incorrect Input.\n");
		}

		}
	
	}while(1);

return 0;
}

void prime(){
	int a;

	printf("Enter n : ");
        scanf("%d",&a);

	if(a == 1){
		printf("Neither Prime Nor Composite.\n");
	}
	else if(a == 2){
		printf("Prime.\n");
	}
	else{
		int count = 0;
		for(int i=2;i<a;i++) {
			if(a%i == 0){
				count++;
				break;
			}
		}
		if(count == 0){
			printf("Prime.\n");
		}
		else {
			printf("Composite.\n");
		}
	}
}

void armstrong(){
	int a;
	
	printf("Enter n : ");
        scanf("%d",&a);
	
	int o = a, r, res = 0;
	while(a > 0){
		r = a%10;
		res += (r*r*r);
		a /= 10;
	}
	if(o == res){
		printf("Armstrong Number.\n");
	}
	else{
		printf("Not an Armstrong NUmber.\n");
	}
}
