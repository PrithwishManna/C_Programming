#include <stdio.h>

int main() {
    int n;
    long int t1 = 0, t2 = 1;
    long int nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci Sequence for the first %d terms:\n", n);

    for (long int i = 1; i <= n; ++i) {
        printf("%ld", t1);

        if (i < n) {
            printf(", ");
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}


