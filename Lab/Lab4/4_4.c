#include<stdio.h>

int main(){
	int iVal, c1, c2;
	float fVal, r1, r2, i1, i2;

	printf("Enter an integer value : ");
	scanf("%d",&iVal);

	printf("Enter a float value : ");
	scanf("%f",&fVal);
	r1 = iVal + fVal;
	r2 = iVal / fVal;

	printf("Enter predicted type code for int + float (1=int, 2=float, 3=double) :  ");
	scanf("%d",&c1);

	printf("Enter predicterd value : ");
	scanf("%f",&i1);

	if(c1 == 2 && i1 == r1){
		printf("MATCH\n");
	}
	else{
		printf("NOT MATCH\n");
	}

	printf("Enter predicted type code for int / float (1=int, 2=float, 3=double) : ");
	scanf("%d",&c2);

	printf("Enter predicted value : ");
	scanf("%f",&i2);

	if(c2 == 2 && i2 == r2){
		printf("MATCH\n");
	}
	else{
		printf("NO MATCH");
	}

	return 0;
}
	
		
