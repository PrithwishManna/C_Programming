
#include<stdio.h>
int main (void) {
	for (;;) {
		int n;
		printf("1.Prime number\n");
		printf("2.Armstrong number\n");
		printf("3.Exit\n");
		scanf("%d",&n);
		switch (n) {

		case 1: {
			int num, count = 0;
			printf("Enter number to check prime : ");
			scanf("%d",&num);
			if (num == 1) {
				printf("Neither Prime nor Composite\n");
				}
			else if (num == 2) {
				printf("Prime\n");
				}
			else {
				for (int i=2; i < num; i++) {
					if (num % i == 0) {
						count++;
						break;
					}
				}
				if (count == 0) {
					printf("Prime\n");
					}
				else {
					printf("Composite\n");	
					}
				break;
				}
			break;
			}
			
		case 2: {
			int num, res = 0;
			printf("Enter number to check Armstrong : ");
			scanf("%d",&num);
			int org = num;
			while (num > 0) {
				int digit = (num % 10);
				res +=  (digit * digit * digit);
				num /= 10;
				}
			if (org == res) {
				printf("Armstrong Number\n");
				}
			else {
				printf("Not a Armstrong Number\n");
				}
			break;
			}

		case 3: {
			return 0;
			}
		
		default: {
			 printf("Invalid Input\n");
			}	
	}
	}
	return 0;
}
