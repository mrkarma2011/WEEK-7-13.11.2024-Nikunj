#include<stdio.h>
int gcd(int x, int y){
    while (x!=0)
    {
        int t = x;
        x = y%x;
        y = t;
    }
    return y;
}
int main(){
	int a,b;
	printf("enter 2 nos to find gcd: ");
	scanf("%d %d", &a,&b);
	printf("The gcd is: %d ", gcd(a,b));
}
