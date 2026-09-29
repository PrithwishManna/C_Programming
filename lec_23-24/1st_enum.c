#include <stdio.h>

enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

int main() {
    enum Day today;
    today = TUESDAY;

    if (today == TUESDAY || today == SATURDAY) {
        printf("It's either Tuesday or Saturday!\n");
    }

    printf("Today's value is %d\n", today);

    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("Day %d\n", i);
    }
    return 0;
}