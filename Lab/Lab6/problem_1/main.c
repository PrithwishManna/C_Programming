#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"myheader.h"


int c1 = 0, c2 = 0,c3 = 0, c4 = 0, c5 = 0, c6 = 0;

int main(){

	srand(time(0));

	for(int i = 1; i <= 60; i++){
		count();
	}
	
	printf("One = %d\n",c1);
	printf("Two = %d\n",c2);
	printf("Three = %d\n",c3);
	printf("Four = %d\n",c4);
	printf("Five = %d\n",c5);
	printf("Six = %d\n",c6);	 

	return 0;
}
