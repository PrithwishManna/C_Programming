#include<stdio.h>

int main(){
    
    typedef struct{
        char name[50];
        int roll_no;
    }student;
    
    student s1 = {"Sonu", 2003}, s2;
    
    s2 = s1;					// Assign whole structures using '='
    
    printf("%s\n", s2.name);
    
    return 0;
    
}