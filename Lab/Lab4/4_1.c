#include<stdio.h>

int main() {
	int h, m, s, r;
	printf("Enter the hour : ");
	scanf("%d",&h);
	printf("Enter the minute : ");
	scanf("%d",&m);
	printf("Enter the second : ");
	scanf("%d",&s);
	r = h * 3600 + m * 60 + s;
	printf("The total time in seconds is : %d.\n",r);
	printf("The time in percentage of 24 hours is %f.\n",(r/864.0));
	return 0;
}
	

