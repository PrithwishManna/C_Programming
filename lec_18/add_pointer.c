#include <stdio.h>

int main() {
    int *p, *r;
    int n = 3, m = 2;
    p = &m;				// add(p) = 878679860
    printf("%p\n", p);			// + n means => 3 * sizeof(int)
    r = p + n;				// add(r) = add(p) + (3 * sizeof(int)) => add(r) = 878679872
    printf("%p %p %d", p, r, n);
    return 0;
}
