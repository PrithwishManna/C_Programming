#include<stdio.h>

int LCM(int,int);
int HCF(int,int);

int main(){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("The HCF of %d & %d is %d.\n",a,b,HCF(a,b));
	printf("The LCM of %d & %d is %d.\n",a,b,LCM(a,b));
	return 0;
}

int LCM(int x,int y){
	return (x*y)/HCF(x,y);
}

int HCF(int x,int y){
	for(int i=(x<y?x:y);i > 0;i--){
		if((x%i == 0) && (y%i == 0)){
			return i;
		}
	}
	return 1;
}
