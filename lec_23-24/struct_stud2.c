// Write a program to store the following information about two student.
// Name, roll number, course no, course name and mark

#include<stdio.h>

typedef struct{
    char name[30];
    int roll_no;
    float mark;
} student;

int main(){
    student s[2];
    int i = 0;
    
    for(i = 0; i < 2; i++){
        printf("Details of student %d: \n", i + 1);
        printf("                    Name : ");
        scanf("%s", s[i].name);
        printf("                    Roll Number : ");
        scanf("%d", &s[i].roll_no);
        printf("                    Mark : ");
        scanf("%f", &s[i].mark);
    }
    printf("Printing students details\n");
    for(i = 0; i < 2; i++){
        printf("Student %d\n", i + 1);
        printf("            Name : %s\n", s[i].name);
        printf("            Roll number: %d\n", s[i].roll_no);
        printf("            Mark: %.2f\n", s[i].mark);
    }
    return 0;
}