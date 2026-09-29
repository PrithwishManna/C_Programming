#include <stdio.h>                  // for printf, scanf, fgets
#include <string.h>                 // for strncpy, strcspn

struct student {
    char name[10];                  // name → string (up to 9 characters + '\0')
    int roll_no;
};

struct student createStudent(const char *name, int roll_no) {
    struct student newStudent;
    strncpy(newStudent.name, name, sizeof(newStudent.name));
    newStudent.name[sizeof(newStudent.name) - 1] = '\0';
    newStudent.roll_no = roll_no;

    return newStudent;
}

void printStudent(struct student s) {
    printf("\n--- Student Details ---\n");
    printf("Name     : %s\n", s.name);
    printf("Roll No. : %d\n", s.roll_no);
}

int main() {
    char name[50];  // larger buffer for user input
    int roll_no;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);     // safer than scanf("%s", name)
    name[strcspn(name, "\n")] = '\0';     // remove newline character added by fgets

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    struct student stud1 = createStudent(name, roll_no);
    printStudent(stud1);

    return 0;
}
