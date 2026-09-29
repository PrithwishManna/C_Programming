#include <stdio.h>

void *max(void *a, void *b, char type) {
    if (type == 'i') {
        return (*(int *)a > *(int *)b) ? a : b;
    } 
    else if (type == 'f') {
        return (*(float *)a > *(float *)b) ? a : b;
    }
    return NULL;
}

int main() {
    int N1 = 50;
    int N2 = 120;

    int *max_int_ptr = (int *)max(&N1, &N2, 'i');
    if (max_int_ptr != NULL) {
        printf("Between %d and %d, the maximum number is: %d\n", N1, N2, *max_int_ptr);
    }
    float F1 = 99.2f;
    float F2 = 119.23f;

    float *max_float_ptr = (float *)max(&F1, &F2, 'f');
    if (max_float_ptr != NULL) {
        printf("Between %.2f and %.2f, the maximum number is: %.2f\n", F1, F2, *max_float_ptr);
    }
    return 0;
}