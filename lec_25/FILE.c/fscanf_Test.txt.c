#include<stdio.h>

int main(){
    int a, b;
    FILE *fm;
    fm = fopen("Test.txt", "r");
    
    if(fm == NULL){
        printf("Error: could not open file Test.txt\n");
        return 1;
    }
    
    int items_read = fscanf(fm, "%d %d", &a, &b);
    
    if(items_read == 2){
        printf("Successfully read two numbers:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }
    else{
        printf("Error: File format was not correct\n");
    }
    
    fclose(fm);
    
    return 0;
}
