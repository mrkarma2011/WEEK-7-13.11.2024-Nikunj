#include<stdio.h>
union student{
	char name[50];
	int marks[5];
	int rno;
}stud;
int main(){
	int p=0;
	printf("Enter your name: ");
	fgets(stud.name, sizeof(stud.name), stdin);
	printf("enter your roll no:")
	scanf("%d", &stud.rno);
	for(i=0; i<5;i++)
	{printf("Enter marks of subject %d", i+1); scanf("%d", stud.marks[i]);
	 p += stud.marks[i];
	}
	printf("\n");
	printf("Percentage= %d %%", p);
	
	
}
