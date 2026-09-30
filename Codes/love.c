#include <stdio.h>

void checklove(int Pratiksha) {
    
    if (Pratiksha > 0) {
    
        if (Pratiksha % 2 == 0) {
            printf("Pratiksha likes me.❤️");
        } else {
            printf("Pratiksha likes me more.😍✨");
        }
    } else {
        printf("Ami puro pagol hoa gechi");
    }
}

int main() {
    int n;
    printf("Enter any integer: ");
    scanf("%d", &n);
    
    checklove(n);
    
    return 0;
}