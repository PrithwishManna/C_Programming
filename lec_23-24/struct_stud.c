// Write a program to store the following information about a student.
// Name, roll number, course no, course name and mark

#include<stdio.h>

typedef struct{
    char name[30];
    long int roll_no;
    int course_no;
    char course_name[50];
    float mark;
} student;



int main(){
    student s1 = {"Lucky", 252123117, 521, "C programming", 10.5};
    printf("Name: %s\n", s1.name);
    printf("Roll number: %lu\n", s1.roll_no);
    printf("Course number: %d\n", s1.course_no);
    printf("Course_name: %s\n", s1.course_name);
    printf("Mark: %.2f", s1.mark);
    
    
    return 0;
}