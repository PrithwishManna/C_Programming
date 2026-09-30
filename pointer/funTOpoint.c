#include <stdio.h>

void salaryhike(int *var, int b){
    *var+=b;
}
int main() {
    int salary = 0, bonus = 0;
    printf("Enter your salary : ");
    scanf("%d", &salary);
    printf("\nEnter the bonus : ");
    scanf("%d", &bonus);
    
    salaryhike(&salary, bonus);
    printf("Final salary : %d", salary);
   
    return 0;
}