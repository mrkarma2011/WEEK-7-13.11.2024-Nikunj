#include <stdio.h>

float avg(int* p, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += p[i];
    
    return sum/n ;
}

int main()
{
 int n; printf("Enter number of elements:"); scanf("%d", &n);
 int a[n]; 
 
 for (int i = 0; i <n; i++)
  {
    printf("Enter element a[%d]: ", i); 
    scanf("%d", &a[i]); 
  } 
  
  printf("the average is %f",avg(a,n));
  return 0;
}