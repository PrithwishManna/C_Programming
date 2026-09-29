// Given an array of marks of 10 students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]


#include<stdio.h>
int main(){

int i=0, marks[10] = {78, 64, 23, 89, 100, 33, 12, 78, 99, 19};

	for(;i<=9;i++){
	     if(marks[i] < 35)
	        printf("%d index is : %d \n", marks[i], i);
	}
return 0;
}
