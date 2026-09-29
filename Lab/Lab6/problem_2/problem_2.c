#include<stdio.h>

static int p = 1, v = 2;

int nextPrime(int p){
	if(p == 1){
		v = 2;
		return v;
	}
	else{	
		for(int i = (v+1);;i++){
			int c = 0;
			for(int j = 2; j < i; j++){
				if(i%j == 0){
					c++;
					break;
				}
			}
			if(c == 0){
				p++;
				v = i;
  				return v;
			}
		}
	}
}
		

int main(){
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		printf("%d\t",nextPrime(i));
	}
	printf("\n");
	return 0;
}
