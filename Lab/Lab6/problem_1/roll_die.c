#include<time.h>
#include<stdlib.h>

extern int c1,c2,c3,c4,c5,c6;

//srand(time(0));

int generate(){
	int a = rand()%6 + 1;
	return a;
}

void count(){

	int n = generate();

	switch (n){
		case 1:c1++;break;

		case 2:c2++;break;
		
		case 3:c3++;break;

		case 4:c4++;break;

		case 5:c5++;break;

		case 6:c6++;break;

		default:break;

	}

}


