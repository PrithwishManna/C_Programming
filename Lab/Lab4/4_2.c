#include<stdio.h>

long double fact(long int);

int main() {
	long int n;
	long double e = 0.0;
	printf("Enter n : ");
	scanf("%ld",&n);
	for (int i=0; i<=n; i++) {
		e += (1.0/fact(i));
	}
	printf("The Euler's number for %ld is %.20Lf.\n",n,e);
	return 0;
}

long double fact(long int n) {
	long double fact = 1.0;
	if (n == 0) {
		return 1;
	}
	else {
		for (int i=1; i <= n; i++) {
			fact *= i;
		}
		return fact;
	}
}
