#include<stdio.h>
struct calendar{
	int d:5;
	int m:4;
	int y: 15;
}date;

int main(){
	
	date.d=10; date.m=5;date.y=2012;
	printf("The date today is: %d/%d/%d", date.d,date.m,date.y);
}
