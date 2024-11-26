#include <stdio.h>
#include <stdlib.h>
int main() {
  int n; printf("Enter number of elements:"); scanf("%d", &n);
 
 int* a = malloc(n*sizeof(int));
 
 for (int i = 0; i <n; i++)
  {
    printf("Enter element a[%d]: ", i); 
    scanf("%d", &a[i]); 
  } 

 int max;
 for (int i = 0; i < n; i++)
 {
    if(max<a[i])
    max=a[i];
 }
 printf("Maximum element is %d", max);
 free(a);
 
    return 0;
}