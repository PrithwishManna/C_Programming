#include<stdio.h>
   int main(){

    int hour, min, sec;

    printf("Enter hour: \n");
    scanf("%d",&hour);

    printf("Enter minute: \n");
    scanf("%d",&min);

    printf("Enter second: \n");
    scanf("%d",&sec);

    int total= (hour*3600)+(min*60)+sec;
    printf("The total time is: %d second\n", total);

    float percentage=(total*100.)/(24*3600);
    printf("the percentage of my time respect about whole day is: %f\n", percentage);

return 0;
}  
