// Write a C function to compute the area and perimeter of a triangle whose sides a, b and c are given by the user as inputs.


#include<stdio.h>
#include<math.h>

void area_peri(float x, float y, float z, float *area, float *peri){
    *peri = x + y + z;
    float s = *peri/2;
    *area = sqrt(s*(s-x)*(s-y)*(s-z));
}

int main(){
    float a, b, c;
    float Area, Perimeter;
    printf("Enter the sides of Triangle : ");
    scanf("%f %f %f", &a,&b,&c);
    
    area_peri(a,b,c, &Area, &Perimeter);
    printf("Perimeter of Triangle : %f\n", Perimeter);
    printf("Area of Triangle : %f", Area);
    
    return 0;
}