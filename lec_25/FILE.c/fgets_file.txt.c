#include<stdio.h>
#define SIZE 100

int main(){
    FILE *fm;
    char line[SIZE];
    
    fm = fopen("file.txt", "r");
    
    if(fm == NULL){
        printf("Error: could not open file.txt\n");
        return 1;
    }
    
    while(fgets(line, SIZE, fm) != NULL){
        printf("%s", line);
    }
    printf("\n");
    
    fclose(fm);

    printf("Successfully read the file.txt\n");
    
    return 0;
}