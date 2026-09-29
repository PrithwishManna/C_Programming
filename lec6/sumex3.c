#include<stdio.h>
int main(void){
     int i, sum=0;
        for(i = 1; i <= 100; i++){
            if(i%3==0)
               continue;
               sum +=i;
        }
        printf("The sum of numbers from 1 to 100 (excluding multiples of 3) is : %d", sum);
return 0;
}