#include<stdio.h>
int main(void) {
	int org_num, u, t, c, rev_num;
	printf("Enter a 3 digit number : ");
	scanf("%d",&org_num);
	u = org_num % 10;
	t = (org_num / 10 ) % 10;
	c = org_num / 100;
	rev_num = (u * 100 + t * 10 + c);
	printf("The reverse number is : %d.\n",rev_num);
	return 0;
}
