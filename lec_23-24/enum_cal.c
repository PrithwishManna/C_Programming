// Write a program to return the number of days in a month using enum.


#include <stdio.h>

enum Month {JAN = 1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};

int isLeap(int year) {
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1; 
    }
    return 0; 
}

int main() {
    int monthInput, yearInput;

    printf("Enter month number (1-12): ");
    scanf("%d", &monthInput);
    
    printf("Enter year: ");
    scanf("%d", &yearInput);

    enum Month month = (enum Month)monthInput;
    int days;

    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            days = 31;
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            days = 30;
            break;

        case FEB:
            if (isLeap(yearInput)) {
                days = 29;
            } else {

                days = 28;
            }
            break;

        default:
            printf("Error: Invalid month number %d.\n", monthInput);
            return 1; 
    }

    printf("The month %d in year %d has %d days.\n", 
           monthInput, yearInput, days);

    return 0; 
}