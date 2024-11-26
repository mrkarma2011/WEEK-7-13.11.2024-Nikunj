#include<stdio.h>
struct student{
	char name[50];
	struct data{
	int gpa;
	int rno;
}data;
}student;

int main(){
	printf("Enter name: ");
	fgets(student.name, sizeof(student.name),stdin);
	printf("Enter gpa: ");
	scanf("%d", &student.data.gpa);
	printf("Enter rno: ");
	scanf("%d", &student.data.rno);
	
	
	printf("Roll no. %d \nName: %sGPA: %d", student.data.rno, student.name, student.data.gpa);
}
