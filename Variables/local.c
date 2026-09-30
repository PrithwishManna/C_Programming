#include<stdio.h>

void test(){    //Function, scope
    int a=45;   //local variable
    int b=67;   //local variable

    printf("\n Values : a=%d and b=%d", a, b);
}               //scope

int main(){     //function
    int x=89;
    int y=78;

    printf("\n Values: x=%d and y=%d", x, y);
    test();

    return 0;
}
