/*Write a program to print a table of powers - power 1 to power 3.
You should print the values for integers 1 to 10. */



#include <stdio.h>

int main(){
    int i = 1;
        while(i<=10){
             printf("Table of power 1-3 of integer from 1 to 10: %d %d %d\n", i, i*i, i*i*i);
             i++;
        }
    
    return 0;
}


/* #include <stdio.h>

int main(){
    int i = 1;
        do{
            printf("Table : %d %d %d\n", i, i*i, i*i*i);
            i++;
        }
        while(i<=10);
    
    return 0;
}  */




/* #include <stdio.h>

int main(){
    int i;
            for(i = 1; i <= 10; i++)
                    printf("Table : %d %d %d\n", i, i*i, i*i*i);
    
    return 0;
}  */