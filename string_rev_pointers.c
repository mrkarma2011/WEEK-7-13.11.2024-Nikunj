#include <stdio.h>
#include<string.h>
int main() {
 char str[10000];
 printf("Enter a string:");
 fgets(str, sizeof(str), stdin);

char* p= str;
for (int i = strlen(str)-1; i>=0; i--)
{
    printf("%c", *(p+i));
}
 
    return 0;
}