#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("Test.txt", "w");
    
    if(fp == NULL){
        printf("Error");
        return 1;
    }
    
    fputs("10 20", fp);
    
    fclose(fp);
    
    printf("Successfully printed to the file Test.txt\n");
    
    return 0;
}