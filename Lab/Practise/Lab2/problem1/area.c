#include<math.h>

double area(int x, int y, int z){
    int s = (x+y+z)/2;
    return sqrt(s*(s-x)*(s-y)*(s-z));
}