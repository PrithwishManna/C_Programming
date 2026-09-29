#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    int roll_no;
    float marks;
} msc_students[60], *ptr;

int main() {
    ptr = msc_students; 		// point to first structure|  ptr = &msc_students[0];


    strcpy(ptr->name, "Alice");
    ptr->roll_no = 101;
    ptr->marks = 95.5;

    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}

/*  Operator	     Used with			Meaning
	.	Structure variable	Access a member directly
	->	Structure pointer	Access a member through the pointer