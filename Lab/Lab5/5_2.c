#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n, r, g;
  
    printf("Enter n : ");
    scanf("%d",&n);

    srand(time(0));
    r = rand()%n + 1;

    printf("Enter your guess : ");
    scanf("%d",&g);

    if(r == g){
        printf("Congrats! You have won.\n");
    }
    else{
        printf("Sorry, you lost.\n");
    }

    return 0;
}