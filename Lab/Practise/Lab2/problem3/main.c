#include<stdio.h>
void addition();
void subtraction();
void multiplication();
void division();

int main(){
    do{
        int c;
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:{
                addition();
                break;
            }
            case 2:{
                subtraction();
                break;
            }
            case 3:{
                multiplication();
                break;
            }
            case 4:{
                division();
                break;
            }
            case 5:{
                return 0;
            }
            default:{
                printf("Invalid choice\n");
            }
        }
    }while(1);
    return 0;
}