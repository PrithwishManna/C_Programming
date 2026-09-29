#include<stdio.h>
double area(int,int,int);
int peri(int,int,int);
int a,b,c;
int main(){
    printf("Enter sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("The perimeter of the triangle is %d.\n",peri(a,b,c));
    printf("The area of the triangle is %.3lf.\n",area(a,b,c));
    return 0;
}