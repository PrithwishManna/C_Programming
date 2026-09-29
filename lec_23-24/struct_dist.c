#include<stdio.h>
#include<math.h>

struct point{
	int x;
	int y;
};

struct Line{
	struct point p1;
	struct point p2;
};

double findLength(struct Line line){
	double diffX = line.p1.x - line.p2.x;
	double diffY = line.p1.y - line.p2.y;
	return sqrt(pow(diffX, 2) + pow(diffX, 2));
}

int main(){

struct Line line;

line.p1.x = 1;
line.p1.y = 2;

line.p2.x = 3;
line.p2.y = 4;

double length = findLength(line);

printf("Point 1: (%d, %d)\n", line.p1.x, line.p1.y);
printf("Point 2: (%d, %d)\n", line.p2.x, line.p2.y);
printf("Length between two numbers is: %.2f", length);

return 0;
}