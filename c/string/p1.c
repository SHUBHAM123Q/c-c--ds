#include<stdio.h>
int main()
{
    char str[100],i;
    printf("enter the string:");
    gets(str);
    for(i=0;str[i];i++);
    for(i=i-1;i>=0;i--)
    {
        printf(" %c ",str[i]);
        
    }
}