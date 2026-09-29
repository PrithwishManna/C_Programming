// Call by Reference

#include <stdio.h>
void swap(int *a, int *b){
    int tmp;
    tmp = *a; *a = *b; *b = tmp;
}
int main() {
    int x = 10, y = 15;
    printf("%d %d\n", x, y);
    swap(&x,&y);
    printf("%d %d",x, y);

    return 0;
}