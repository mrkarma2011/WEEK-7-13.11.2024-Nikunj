#include <stdio.h>
int a,b,c;
int series(int n){
    if(n==1)
    return a;
    if(n==2)
    return a+b;
    if(n==3)
    return a+b+c;
    else 
    return series(n-1)+ series(n-2)+ series(n-3);
}
int main() {
 printf("Enter the value of a,b,c: "); scanf("%d %d %d", &a, &b, &c);
 int x;
printf("Enter the value of n: ");
scanf("%d", &x);

printf("Term: %d", series(x));
 
    return 0;
}