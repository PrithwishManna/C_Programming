#include<stdio.h>

int handshake(int n){
    if(n==2) return 1;
    else return handshake(n-1) + (n-1);
}

int main(){
    int n;
    printf("Enter the number of persons in the room : ");
    scanf("%d",&n);
    printf("The number of handshakes is : %d.\n",handshake(n));
    return 0;
}