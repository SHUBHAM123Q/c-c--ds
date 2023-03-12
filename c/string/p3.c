#include<stdio.h>
int main()
{
    char a[100],b[100],i,j=0;
    printf("enter the str=");
    gets(a);
    printf("enter the str=");
    gets(b);
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            j=1;
            break;
        }
    }
    if(j==0)
    printf(" sam ");
    else
    printf(" no sam ");
}