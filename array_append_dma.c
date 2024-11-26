#include<stdio.h>
#include<stdlib.h>
int main()
{   int n1, n2; printf("enter number of elements for both arrays: "); scanf("%d %d", &n1, &n2); 
    int* a = (int*)malloc(n1+n2*sizeof(int));
    int* b = (int*)malloc(n2*sizeof(int));
printf("Enter 1st array: \n");
for (int i = 0; i < n1; i++)
{
    printf("Enter element a[%d]: ", i);
    scanf("%d", &a[i]);
}
printf("Enter 2nd array: \n");
for (int i = 0; i < n2; i++)
{
    printf("Enter element b[%d]: ", i);
    scanf("%d", &b[i]);
}

for (int i = n1; i < n1+n2; i++)
{
    a[i]= b[i-n1];
}

printf("New array is: ");
for(int i=0; i<n1+n2; i++)
printf("%d ", a[i]);


}