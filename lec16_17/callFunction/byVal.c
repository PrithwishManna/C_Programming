// Call by Value
// C passes arguments by value, which means the function receives copies of the variables, not the originals.
// When the function swap ends, its local variables (a, b, and tmp) are destroyed.
// The original variables x and y in the main function were never touched.

#include <stdio.h>
void swap(int a, int b){
    int tmp;
    tmp = a; a = b; b = tmp;
}
int main() {
    int x = 10, y = 15;
    printf("%d %d\n", x, y);
    swap(x,y);
    printf("%d %d",x, y);

    return 0;
}