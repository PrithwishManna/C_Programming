#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    
    printf("address of a is : %p\n",&a);
    printf("address of a is : %p\n",p);
    printf("address of p is : %p\n",&p);
    printf("value of a is : %d\n", a);
    printf("value of a is : %d\n", *p);
    *p = 7;
    printf("value of a is : %d", a);
    return 0;
}
